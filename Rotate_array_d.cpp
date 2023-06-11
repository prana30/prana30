#include<bits/stdc++.h>
using namespace std;

void leftrotate(int arr[], int n, int d){
    if (n==0) return;
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    
}
int main()
{
    int n=7;
    int arr[]={1,2,3,4,5,6,7};
    int d=3;
    
    cout<<"before rotation;"<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
        
    leftrotate(arr,n,d);
    cout<<"after rotation;"<<endl; 
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
  return 0;
}
