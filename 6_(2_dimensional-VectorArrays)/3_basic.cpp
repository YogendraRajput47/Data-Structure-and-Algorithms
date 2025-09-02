// Intialization of 2d Vector

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int rows=3;
    int cols=4;
    vector<vector<int> > arr(rows,vector<int>(cols,0));

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
