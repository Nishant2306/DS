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
void SumOfPairs(int arr[], int n, int a)
{
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == a)
            {
                cout << arr[i] << " " << arr[j] << endl;
                f++;
            }
        }
    }
    if (!f)
    {
        cout << "No valid pair exists\n";
    }
}
void SumOfPairs1(int arr[], int a, int start, int end)
{
    sort(arr, arr + end + 1);
    cout << "the sorted array is:-\n";
    display(arr, end + 1);
    while(start < end){
        if ((arr[start] + arr[end]) == a)
        {
            cout << arr[start] << " " << arr[end] << endl;
            start++;
            end--;
        }
        else if ((arr[start] + arr[end]) > a)
        {
            end--;
        }
        else if ((arr[start] + arr[end]) < a)
        {
            start++;
        }
    } 
}
void SumOfPairs2(int arr[],int n, int a){
    unordered_set<int> s1;
    for(int i =0; i<n; i++){
        int num = a- arr[i];
        if(s1.find(num) != s1.end()){
            cout<< arr[i] << " " << num << endl;
        }
        s1.insert(arr[i]);
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
        int a;
        cout << "Enter possible sum :-\n";
        cin >> a;
        SumOfPairs2(arr, n, a);
    }
    return 0;
}