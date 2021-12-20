#include <bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    cout << "Enter the elements of array:-\n";
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
void reverse1(int arr[], int start, int end)
{
    int b;
    int mid = (start + end)/2;
    for (int i = 0; i <= mid; i++)
    {
            b = arr[start + i];
            arr[start + i] = arr[end - i];
            arr[end - i] = b;
    }
}
void reverse2(int arr[], int start, int end){
    int b;
    while (start < end)
    {
        b = arr[start];
        arr[start] = arr[end];
        arr[end] = b;
        start++;
        end--;
    }
}
void reverse3(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverse3(arr, start+1, end-1);
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
        cout << "The array is:-\n";
        display(arr, n);
        reverse1(arr, 0, n-1);
        cout << "The array after reversing using for loop is:-\n";
        display(arr, n);
        reverse2(arr, 0, n-1);
        cout << "The array after reversing using while loop is:-\n";
        display(arr, n);
        reverse3(arr, 0, n-1);
        cout << "The array after reversing using recursion is:-\n";
        display(arr, n);

    }

    return 0;
}