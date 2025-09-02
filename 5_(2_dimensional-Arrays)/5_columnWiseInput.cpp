
#include <iostream>

using namespace std;

void printArray(int arr[][3], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Enter the elements" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[j][i];
        }
    }
    cout << endl;
    cout << "Printing the elements" << endl;
    printArray(arr, rows, cols);
}