#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int pivot(int arr[], int low, int high)
{
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return pivot(arr, low, mid - 1);
 
    return pivot(arr, mid + 1, high);
}
int binarysearch(int arr[],int start, int end, int a)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end + 1) / 2;
        if (a == arr[mid])
        {
            return mid;
        }
        else if (a < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int search(int arr[], int start, int end, int a)
{
    int p = pivot(arr, start, end);
    if (p == -1)
    {
        int c = binarysearch(arr, 0, end, a);
        return c;
    }
    else if (arr[p] == a)
    {
        return p;
    }
    else if (arr[0] <= a)
    {
        return binarysearch(arr, 0, p, a);
    }
    else
    {
        return binarysearch(arr, p+1, end, a);
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter any number less than 100:-\n";
    cin >> n;
    if (n >= 100)
    {
        cout << "**Error, number is not less than 100**\n";
    }
    else
    {
        int arr[100];
        input(arr, n);
        display(arr, n);
        int a;
        cin >> a;
        cout << search(arr, 0, n, a);
    }
    return 0;
}