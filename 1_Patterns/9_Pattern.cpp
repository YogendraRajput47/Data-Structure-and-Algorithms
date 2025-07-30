//Inverted Full Pyramid

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {

        for (int k = 0; k < row; k++)
        {
            cout << " ";
        }
        for(int col=0;col<n-row;col++)
        {
            cout<<"* ";
        }
       
        cout<<endl;

    }
}
