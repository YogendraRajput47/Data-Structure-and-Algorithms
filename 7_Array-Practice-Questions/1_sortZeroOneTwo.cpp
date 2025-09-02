#include<iostream>
#include<vector>

using namespace std;

int main(){
  vector<int>arr{1,2,0};
  int mid=0,start=0;
  int end=arr.size()-1;

  while(mid<end){
    if(arr[mid]==0)
    {
        swap(arr[mid],arr[start]);
        start++;
        mid++;
    }
    else if(arr[mid]==arr[end] && arr[mid]==2){
        end--;
    }
    else{
        swap(arr[mid],arr[end]);
        mid++;
    }
  }

  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }

}