#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int>nums){
    // int ans=-1;
    // for(int i=0;i<nums.size();i++){
    //     int ele=abs(nums[i]);
    //     if(nums[ele]< 0){
    //         return ele;
    //     }
    //     else{
    //         nums[ele]*=ans;
    //     }
    // }
    // return ans;


    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    
    return nums[0];
    
}


int main(){
    vector<int>nums{1,3,4,3,2};
    int duplicate=findDuplicate(nums);
    cout<<duplicate;
}