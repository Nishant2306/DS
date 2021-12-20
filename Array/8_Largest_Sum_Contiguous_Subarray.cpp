#include<bits/stdc++.h>
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
int subarray(int arr[], int n){
    int max_till_now = INT_MIN;
    int max_at_end = 0;
    for(int i=0; i<n; i++){
        max_at_end = max_at_end + arr[i];
        if(max_till_now < max_at_end){
            max_till_now = max_at_end;
        }
        if(max_at_end < 0){
            max_at_end = 0;
        }
    }
    return max_till_now;
}

int main(){
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
        cout << subarray(arr, n);
    }
return 0;
}