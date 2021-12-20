
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
}
void search(int arr[], int n, int a)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a == arr[i])
        {
            cout << "the element is present at the position " << i + 1 << endl;
            f++;
            break;
        }
    }
    if (f == 0 /*instead of f==0 we can use !f*/)
    {
        cout << "element not found\n";
    }
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
void insert(int arr[], int &n, int a)
{
    n++;
    if (n >= 100)
    {
        cout << "No space in the array\n";
    }
    else
    {

        arr[n - 1] = a;
        display(arr, n);
        cout << endl;
    }
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
        cout << "\nEnter an element u want to search:-\n";
        int a;
        cin >> a;
        search(arr, n, a);
        cout << "\nEnter an element u want to insert:-\n";
        int b;
        cin >> b;
        insert(arr, n, b);
        cout << "\nEnter an element u want to delete:-\n";
        int c;
        cin >> c;
        Delete(arr, n, c);
    }
    return 0;
}