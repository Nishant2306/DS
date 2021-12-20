#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {   int f=0,min;
        vector <int> v;
        while(f!=n)
        {
            min=arr[0];
            for(int i=0;i<n;i++){
                if(arr[i]<min) min=arr[i];
            }
            for(int i=0;i<n;i++){
                if(arr[i]>0) arr[i]-=min;
            }
            f=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==0) 
                {
                    f++;
                }
            }
            v.push_back(n-f);
        }
        return v;
    }
};
int main(){ 
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}