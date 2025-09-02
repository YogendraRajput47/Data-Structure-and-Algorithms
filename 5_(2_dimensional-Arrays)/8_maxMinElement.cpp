// Maximum and minimum element in 2D array

#include<iostream>
#include<limits.h>

using namespace std;


int getMaxnimum(int arr[][3],int rows,int cols)
{
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for (int j = 0; j < cols; j++){
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    return max;
}
int getMinimum(int arr[][3],int rows,int cols)
{
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 0, 6},
        {17, 8, 9},
    };
    int rows = 3;
    int cols = 3;
    int max = getMaxnimum(arr, rows, cols);
    int min = getMinimum(arr, rows, cols);
    cout<<"Maximum element in given array is "<<max<<endl;
    cout<<"Minimum element in given array is "<<min<<endl;
}