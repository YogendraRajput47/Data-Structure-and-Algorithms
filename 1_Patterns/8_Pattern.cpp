// Full Pyramid

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        for(int k=0;k<n-(row+1);k++)
        {
            cout<<" ";
        }
        for(int j=0;j<row+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}