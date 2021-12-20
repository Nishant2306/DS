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
int search(int arr[], int n, int a)
{
    int start = 0, end = n, mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end + 1) / 2;
        if (a == arr[mid])
        {
            return a;
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

void Delete(int arr[], int &n, int a)
{
    int b;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a == arr[i])
        {
            b = i;
            f++;
            break;
        }
    }
    if (!f)
    {
        cout << "Element not found\n";
    }
    else
    {
        for (int i = b; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
        display(arr, n);
        cout << endl;
    }
}

void Insert(int arr[], int &n, int a)
{
    int b;
    int i = 0;
    while (a < arr[i])
    {
        i++;
    }
    b = i + 1;
    n++;
    for (int i = n-1; i >=b; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[b] = a;
    display(arr, n);
    cout << endl;
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
    cout << "Enter an element u want to search\n";
    cin >> a;
    cout << search(arr, n, a) << endl;
    int b;
    cout << "Enter an element u want to delete\n";
    cin >> b;
    Delete(arr, n, b);
    int c;
    cout << "Enter an element u want to insert\n";
    cin >> c;
    Insert(arr, n, c);
    return 0;
    }
}