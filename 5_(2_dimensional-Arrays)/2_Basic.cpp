// Basics of 2-D Arrays


#include<iostream>
using namespace std;

int main(){
    // declare 2D Array 
    int arr[3][3];

    // initialization
    int brr[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //Accessing elements
    cout<<"Accessing elements "<<brr[1][2]<<endl;

    //row-wise print
    // Outer loop->rows
    cout<<"Row wise Printing"<<endl;
    for(int row=0;row<3;row++)
    {
        // inner loop ->colums
        for(int col=0;col<3;col++)
        {
            cout<<brr[row][col]<<" ";
        }
        cout<<endl;
    }

    cout << "Column wise Printing" << endl;
   
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<3;col++)
        {
            cout<<brr[col][row]<<" ";
        }
        cout<<endl;
    }
}