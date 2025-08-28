#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printArray(vector<int>crr){
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
}

int main(){
    vector<int>arr{1,2,3,4,6,8,2,2};
    vector<int> brr = {3, 4, 9, 10,2,2};

    vector<int>crr;
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag=true;
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] =INT_MIN;
                if(flag)
                {
                    crr.push_back(arr[i]);
                   flag=false;
                }
            }
        }
    }

    printArray(crr);
}

