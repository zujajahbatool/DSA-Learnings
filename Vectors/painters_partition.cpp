/*  Problem Statement:
Given are N boards of length of each given in the form of array and M painters such that each painter takes 1 unit of time to paint 1 unit of the board. The problem is to find minimum time to paint all boards under the constraints that painter will only paint contiuous sections of boards.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int max_Allocations)
{
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_Allocations)
        {
            return false;
        }
        if (arr[i] + time > max_Allocations)
        {
            painters++;
            time = arr[i];
            if (painters > m)
            {
                return false;
            }
        }
        else
        {
            time += arr[i];
        }
    }
    return true;
}

int painters_partition(vector<int> arr, int n, int m)
{
    int sum = 0;
    int max_time = 0;
    if (m > n)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        max_time = max(max_time, arr[i]);
    }
    int start = max_time;
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