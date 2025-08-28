// sort 0's and 1's 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,0,1,1,0,1,0,1,0,0,0,0,1,1};
    int start=0;
    int end=arr.size()-1;
    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else{
            swap(arr[start],arr[end]);
            end--;
        }
    }

    for(int i=0;i<arr.size();i++)
      {
          cout << arr[i] << " ";
      }
}