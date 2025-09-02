#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<vector<int>>arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    // Declaration
    vector<vector<int> >arr;
    vector<int>a{1};
    vector<int>b{3,4,5};
    vector<int>c{6,7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
   
    printArray(arr);

    
    
}