/*  Problem Statement:
There are N books each ith book has arr[i] number of pages. You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum. Each books should be allocated to a student. Each student has to be allocated at least one book. Allotment should be in a contiguous manner. Calculate and return that minimum possible number. Return -1 if alocation not possible.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int max_Allocations)
{
    int students = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_Allocations)
        {
            return false;
        }
        if (arr[i] + pages > max_Allocations)
        {
            students++;
            pages = arr[i];
            if (students > m)
            {
                return false;
            }
        }
        else
        {
            pages += arr[i];
        }
    }
    return true;
}

int book_allocation(vector<int> arr, int n, int m)
{
    int sum = 0;
    int max_pages = 0;
    if (m > n)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_pages = max(max_pages, arr[i]);
    }
    int start = max_pages;
    int end = sum;
    int answer = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, m, mid) == true)
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return answer;
}