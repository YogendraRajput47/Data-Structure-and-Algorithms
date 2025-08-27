#include<iostream>
using namespace std;




int main(){
    int arr[10]={1,1,0,0,1,0,1,9,4,2};
    int size=sizeof(arr)/sizeof(int);
    int zeros=0,ones=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0) zeros++;
        if(arr[i]==1) ones++;
    }

    cout<<"Number of zeros: "<<zeros<<endl;
    cout<<"Number of ones: "<<ones<<endl;

}