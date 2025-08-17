// Reverse an Array using Two-Pointer Approach
#include <iostream>
using namespace std;
void reverse()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter element arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << "\nThe array before reversing is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    int start = 0;      // pointer 1 points to the start of array
    int end = size - 1; // poiinter 2 points to the end of array
    while (start < end)
    {
        /*repeats until the starting pointer is at a smaller index than the ending pointer. Works for both even and odd sized arrays. */
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "\nThe array after reversing is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int main()
{
    reverse();
    return 0;
}