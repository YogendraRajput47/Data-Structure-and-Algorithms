#include<iostream>
#include<limits.h>
using namespace std;

int miniInArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int maxInArray(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={2,4,1,6,18,9,0}; 
    int size=sizeof(arr)/sizeof(int);

    int max=maxInArray(arr,size);
    int min=miniInArray(arr,size);
    cout<<"Max number in given array: "<<max<<endl;
    cout<<"Min number in given array: "<<min<<endl;
}