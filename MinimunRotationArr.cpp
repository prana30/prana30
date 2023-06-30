#include <bits/stdc++.h>
using namespace std;
int findmin(vector<int>& arr){
    int low = 0, high = arr.size()-1;
    int ans = INT_MAX;
    while (low <= high){
        int mid = (low+high) /2;
        if (arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
    }
    if (arr[low] <= arr[mid]){
        ans = min(ans, arr[low]);
        low= mid +1;
    }
    else{
        high = mid-1;
        ans = min(ans, arr[mid]);
    }
}
return ans;
}
int main(){
vector<int> arr = {4,5,6,7,2,3};
int n = arr.size();
 cout << findmin( arr) << endl;
return 0;
}
    
    
