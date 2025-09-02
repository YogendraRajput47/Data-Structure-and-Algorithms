#include<iostream>
using namespace std;

int linearSearch(int arr[][3],int rows,int cols,int target)
{
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++)
        {
            if(target==arr[i][j])
            {
                return (cols*i)+j;
            }
        }
    }
    return  -1;
}
int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    int rows=3;
    int cols=3;
    int target;
    cout<<"Enter target you want to search: ";
    cin>>target;
    int index=linearSearch(arr, rows, cols, target);
    if(index==-1)
    {
        cout<<"Target not found"<<endl;
    }else{
        cout<<"Target found at "<<index<<endl;
    }
}