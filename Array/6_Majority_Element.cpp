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
void majority(int arr[], int n)
{
    int count = 0;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                a = arr[i];
                count++;
            }
        }
    }
    if (count > n / 2)
    {
        cout << "\nThe majority element is " << a << endl;
    }
    else
    {
        cout << "\nNo Majority Element\n";
    }
}
// method 2 - Moore’s Voting Algorithm ( 2 step - 1. candidate , 2. check) if +50% then must be in secuence or at last
void majority1(int arr[], int n)
{
    int count = 1;
    int maj_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[maj_index] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[maj_index])
        {
            count1++;
        }
    }

    if (count1 > n / 2)
    {
        cout << arr[maj_index] << endl;
    }
    else
    {
        cout << "\nno majority element\n";
    }
}
void majority2(int arr[], int n)
{
    unordered_map<int, int> m1;
    for (int i = 0; i < n; i++)
    {
        m1[arr[i]]++;
    }
    for (auto i : m1)
    {
        if (i.second > n / 2)
        {
            cout << i.first;
        }
    }
}
void majority3(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    int prev = INT_MIN;
    int a;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            a = arr[i];
            if (count > n / 2){
                cout << a << endl;
            }
        }
        else
        {
            count = 1;
        }
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
        cout << "The array is:-\n";
        display(arr, n);
        majority3(arr, n);
    }
    return 0;
}