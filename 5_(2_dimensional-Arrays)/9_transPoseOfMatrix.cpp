#include<iostream>
using namespace std;

void printArray(int arr[3][3], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

    void transpose(int arr[3][3], int rows, int cols)
{
    int tranpose[3][3];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            tranpose[j][i] = arr[i][j];
        }
    }
    printArray(tranpose, rows, cols);
}

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int rows=3,cols=3;
    cout<<"Before transpose"<<endl;
    printArray(arr, rows, cols);
    cout<<"After transpose"<<endl;
    transpose(arr,rows,cols);
}

