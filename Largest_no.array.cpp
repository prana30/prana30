#include<bits/stdc++.h>
using namespace std;

     int largest(vector<int>&nums){
        int n = nums.size();
        int largest = nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
    return largest;
    
}

int main(){
    vector<int>nums={1,2,5,6,9,4};
    cout<< largest(nums);
}
