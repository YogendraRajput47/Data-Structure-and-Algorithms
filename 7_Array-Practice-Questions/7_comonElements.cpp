#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;


 int main(){
     vector<int> arr1 = {1, 5, 10, 20, 40, 80};
     vector<int> arr2 = {6, 7, 20, 80, 100};
     vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};
     vector<int>ans;


     for(int i=0;i<arr1.size();i++)
     {
        for(int j=0;j<arr2.size();j++)
        {
            for(int k=0;k<arr3.size();k++)
            {
                if(arr1[i]==arr2[j] && arr1[i]==arr3[k])
                {
                    ans.push_back(arr1[i]);
                    arr3[k]=INT_MIN;
                }
            }
        }
     }

     for(int i=0;i<ans.size();i++)
     {
        cout<<ans[i]<<"  ";
     }
 }