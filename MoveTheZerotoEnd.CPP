#include<bits/stdc++.h>
using namespace std;

void movingzerostoend(int arr[], int n){
    int index = 0;
    for(int i =0; i<n;i++){
        if (arr[i] !=0){
        arr[index++]=arr[i];
    }
}
        while (index < n){
            arr[index++]= 0;
    }
 }
int main() {
     int arr[] = {4,5,6,0,2,0,0,9,0,1};
    int n=10;
     movingzerostoend(arr, n);
    for ( int i=0; i<n; i++){
         cout<< arr[i]<<" ";            
    }
    cout<<endl;
    return 0;
    
}
    

        
    

