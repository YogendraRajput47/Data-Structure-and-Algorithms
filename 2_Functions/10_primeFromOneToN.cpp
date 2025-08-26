#include<iostream>
using namespace std;


bool checkPrime(int i){
   for(int j=2;j<i;j++)
   {
    if(i%j==0){
        return false;
    }
   }
   return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        bool ans=checkPrime(i);
        if(ans){
            cout<<i<<" ";
        }
    }
}