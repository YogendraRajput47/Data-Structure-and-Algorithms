#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>>arr={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows=arr.size();
    int cols=arr[0].size();

    // bool flag=true;
    // for(int i=0;i<cols;i++)
    // {
    //     if(flag){
    //         for(int j=0;j<rows;j++)
    //         {
    //             cout<<arr[j][i]<<" ";
    //         }
    //         flag=false;
    //         cout<<endl;
    //     }else{
    //         for (int j = rows-1; j >= 0; j--)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //         flag = true;
    //         cout<<endl;
    //     }
    // }

    for(int startCol=0;startCol<cols;startCol++)
    {
        if((startCol&1)==0)
        {
            for(int i=0;i<rows;i++)
            {
                cout<<arr[i][startCol]<<" ";
            }
            cout<<endl;
        }else{
            for(int i=rows-1;i>=0;i--)
            {
                cout<<arr[i][startCol]<<" ";
            }
            cout<<endl;
        }
    }
    
}