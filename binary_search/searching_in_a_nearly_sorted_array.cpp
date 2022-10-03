#include <bits/stdc++.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
       int mid = l + (r - l) / 2;

       if(arr[mid] == x){
        return mid;
       } if(mid <= r && arr[mid + 1] == x){
        return mid + 1;
       }
       if(mid >= l && arr[mid - 1] == x){
        return mid - 1;
       }

       if(x > arr[mid])
       {
        l = mid + 2;
       }else if(x < arr[mid]){
        r = mid - 2;
       }
    }
    return -1;
}

int main(void)
{
    int arr[] = {3, 2, 10, 4, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
    return 0;
}