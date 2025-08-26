#include<iostream>
using namespace std;


int factorialOfSmall(int n){
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

int main(){
    int n;
    cin>>n;
    int ans = factorialOfSmall(n);
    cout<<"Factorial of "<<n<<" = "<<ans;
}