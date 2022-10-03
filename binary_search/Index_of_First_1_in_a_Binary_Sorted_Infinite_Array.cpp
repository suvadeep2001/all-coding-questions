#include <bits/stdc++.h>
using namespace std;

int bs(int arr[], int start, int end, int key)
{
    int res = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            res = mid;
            end = mid - 1;
        }
    }
    return res;
}

int modified_binary_search(int arr[], int start, int end, int target)
{
    start = 0;
    end = 1;

    while (target > arr[end])
    {
        start = end;
        end = end * 2;
    }
    int index = bs(arr, start, end, target);
    return index;
}

int main()
{

    int arr[] = { 0, 0, 1, 1, 1, 1 };

    cout << modified_binary_search(arr, 0, 1, 1);

    return 0;
}