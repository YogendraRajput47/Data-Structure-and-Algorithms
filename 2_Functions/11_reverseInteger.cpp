#include<iostream>
using namespace std;


int reverseNumber(int n){
    int reverse=0;
    while(n!=0){
        int rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    return reverse;
}

int main(){
    int n;
    cin>>n;
    int ans=reverseNumber(n);
    cout<<"Reverse of "<<n<<" is "<<ans;
}