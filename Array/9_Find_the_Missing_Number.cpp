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
void missingnum(int arr[], int n){
    int sum = (((n+1)*(n+2))/2);
    int sumarr = 0;
    for(int i=0; i<n; i++){
        sumarr = sumarr + arr[i];
    }
    cout << (sum - sumarr) << endl;
}
int missingnum1(int arr[], int n){
    int i;
    int total=1;
    for(i =2; i<=(n+1); i++){
        total = total + i;
        total = total - arr[i-2];
    }
    return total;
}
int missingnum2(int arr[], int n){
    int a=0, b=0;
    for(int i = 1; i<n+2; i++){
        a = a^i;
    }
    for(int i=0; i<n; i++){
        b = b^arr[i];
    }
    return a^b;
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
        // missingnum(arr, n);
        cout << missingnum2(arr, n);
    }
return 0;
}