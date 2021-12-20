#include <bits/stdc++.h>
using namespace std;
#define NA -1
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
void median(int arr2[], int size){
    int a = size/2;
    float b = ((arr2[a]+arr2[a-1])/2.0);

    if(size % 2 != 0){
        cout << "The median is:- " << arr2[a] << endl; 
        cout << "odd\n";
    }if(size%2 ==0){
        cout << "The median is:- " << arr2[a] << " " << arr2[a-1] << " "<< b << endl;
        cout << "even\n";
    }
}
void MergeArr(int arr[], int arr1[], int s1, int s2)
{
    int arr2[s1 + s2];
    for (int i = 0, j = 0, k = 0; i < s1, j < s2, k < s1 + s2;)
    {
        if (arr[i] < arr1[j] and i < s1 and j <s2)
        {
            arr2[k++] = arr[i];
            i++;
        }
        else if (arr[i] > arr1[j] and j < s2 and i < s1)
        {
            arr2[k++] = arr1[j];
            j++;
        }
        if (i >= s1 and j < s2)
        {
            arr2[k++] = arr1[j];
            j++;
        }
        if (j >= s2 and i < s1)
        {
            arr2[k++] = arr[i];
            i++;
        }
    }
    display(arr2, s1+s2);
    cout << endl;
    median(arr2, s1+s2);
}
int main()
{
    int s2, s1;
    cout << " Enter the size of 1st array\n";
    cin >> s1;
    int arr[100];
    cout << "Enter 1st array:-\n";
    input(arr, s1);
    cout << " Enter the size of 2st array\n";
    cin >> s2;
    int arr1[100];
    int arr2[s1+s2];
    cout << "Enter 2nd array:-\n";
    input(arr1, s2);
    cout << "The First array is:-\n";
    display(arr, s1);
    cout << "The Second array is:-\n";
    display(arr1, s2);
    MergeArr(arr, arr1, s1, s2);
    return 0;
}
