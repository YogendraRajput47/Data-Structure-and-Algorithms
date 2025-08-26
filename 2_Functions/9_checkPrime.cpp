#include<iostream>
using namespace std;

bool checkPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        return true;
    }
}

    int
    main()
{
    int n;
    cin>>n;
    bool ans=checkPrime(n);
    if(ans){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Non-prime";
    }
}
