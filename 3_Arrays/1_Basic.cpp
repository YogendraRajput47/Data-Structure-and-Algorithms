// Static Array Declaration and taking input from user


#include<iostream>

using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the value in array: "<<endl;
    for(int i=0;i<5;i++)
    {
        // Taking input
        cin>>arr[i];
    }
    cout<<"Printing the array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}