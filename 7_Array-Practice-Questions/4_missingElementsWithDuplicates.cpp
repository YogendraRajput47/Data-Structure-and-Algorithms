#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{1, 3, 3, 3, 3};

    // method-1

    // int duplicate=0;

    // for(int i=0;i<nums.size();i++)
    // {
    //     int ele=abs(nums[i])-1;

    //     if(nums[ele]>0){
    //         nums[ele]=nums[ele]*-1;
    //     }else{
    //         duplicate=ele+1;
    //     }
    // }
    // cout<<"Missing elements: ";
    // for(int i=0;i<nums.size();i++)
    // {
    //     if(nums[i]>0){
    //         cout<<i+1<<" ";
    //     }
    // }

    // cout<<endl;

    // cout<<"Duplicate: "<<duplicate<<endl;

    // Method-2

    int i = 0;
    while (i < nums.size())
    {
        int index = nums[i] - 1;
        if (nums[i] != nums[index])
        {
            swap(nums[i], nums[index]);
        }
        else
        {
            i++;
        }
    }

    // 1,3,3,4,5

    for(int i=0;i<nums.size();i++)
    { 
       if(nums[i]!=i+1){
        cout<<i+1<<" ";
       }
    }
}
