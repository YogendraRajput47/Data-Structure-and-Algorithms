#include<iostream>
using namespace std;


int getEvenSum(int n){
    int sum=0;
    for(int i=0;i<=n;i+=2){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int ans = getEvenSum(n);
    cout<<"Sum upto n is "<<ans;
}