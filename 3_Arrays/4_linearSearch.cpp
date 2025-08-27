#include<iostream>

using namespace std;


bool linearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={2,9,6,7,4,12,15};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cout<<"Enter a number: ";
    cin>>target;
    if(linearSearch(arr,size,target))
    {
        cout<<"Target Found"<<endl;
    }else{
        cout<<"Target not found"<<endl;
    }
}