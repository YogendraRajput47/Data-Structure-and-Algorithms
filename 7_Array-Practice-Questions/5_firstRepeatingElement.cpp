#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

int main(){
    vector<int>arr{1,5,3,4,3,5};

    unordered_map<int,int>hash;
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]++;
    }

   for(int i=0;i<arr.size();i++)
   {
     if(hash[arr[i]]>=2){
        cout<<arr[i]<<" ";
        break;
     }
   }
}