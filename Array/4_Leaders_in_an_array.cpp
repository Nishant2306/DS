#include<bits/stdc++.h>
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
void leader(int arr[], int n){
    for(int i=0; i<n; i++){
        bool f = true;
        for(int j=i+1; j<n; j++){
            if(arr[i]<arr[j]){
                f = false;
                break;
            }
        }
        if(f){
            cout << arr[i] << " ";
        }
    }
} 
void leader1(int arr[], int n){
    int max = arr[n-1];
        cout << max << " ";
        for(int i=n-1; i>=0; i--){
            if(max < arr[i]){
                cout << arr[i] << " ";
                max = arr[i];
            }
        }
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
        // leader(arr, n);
        leader1(arr, n);
    }
return 0;
}