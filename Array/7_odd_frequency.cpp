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
void odd(int arr[], int n){
    for(int i=0; i<n; i++){
    int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count % 2 == 1){
            cout << arr[i] << endl;
            break;
        }
    }
}
void odd1(int arr[], int n){
    unordered_map<int, int> m1;
    for(int i=0; i<n; i++){
        m1[arr[i]]++;
    }
    for(auto i : m1){
        if(i.second % 2 == 1){
            cout << i.first << endl;
        }
    }
}
void odd2(int arr[], int n){
    int a = 0;
    for(int i =0; i < n; i++){
        a = a ^ arr[i];
    }
        cout << a << endl;
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
        odd2(arr, n);
    }
    return 0;
}