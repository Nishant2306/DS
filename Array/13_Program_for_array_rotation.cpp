// 14 and 15 also included🙂
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
void rotation(int arr[], int n, int d)
{
    d = d % n;
    int arr1[d];
    for (int i = 0; i < d; i++)
    {
        arr1[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = arr1[i - (n - d)];
    }
    display(arr, n);
}
void rotation1(int arr[], int n, int d)
{
    int temp;
    d = d % n;
    while (d--)
    {
        temp = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    display(arr, n);
}
int GCD(int n, int d)
{
    int gcd = 1;
    for (int i = 1; i <= d; i++)
    {
        if (d % i == 0 and n % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
void rotation2(int arr[], int n, int d)
{
    int gcd = GCD(n, d);
    cout << gcd << endl;
    for (int j = 0; j < gcd; j++)
    {
        int temp = arr[j];
        for (int i = j; i < n; i += gcd)
        {
            arr[i] = arr[i + gcd];
        }
        arr[n - gcd + j] = temp;
    }
    display(arr, n);
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
void rotation3(int arr[], int n, int d){
    reverse3(arr, 0, d-1);
    reverse3(arr, d, n-1);
    reverse3(arr, 0, n-1);
    display(arr, n);
}
void swap(int arr[], int fi, int si, int d){
    int i, temp;
    for(i = 0; i < d; i++)
    {
        temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}
void rotation4(int arr[], int n, int d){
    int i, j;
    if (d == 0 || d == n)
        return;
         
    i = d;
    j = n - d;
    while (i != j)
    {
        if (i < j)
        {
            swap(arr, d - i, d + j - i, i);
            j -= i;
        }
        else 
        {
            swap(arr, d - i, d, j);
            i -= j;
        }
         
    }
    swap(arr, d - i, d, i);
    display(arr, n);
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
        int d;
        cout << "Enter d:-\n";
        cin >> d;
        rotation4(arr, n, d);
    }
    return 0;
}