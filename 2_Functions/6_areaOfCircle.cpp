#include<iostream>
using namespace std;



float areaOfCircle(float PI,float radius){
    return PI*radius*radius;
}

int main(){
    const float PI=3.14;
    float radius;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    float ans=areaOfCircle(PI,radius);
    cout<<"Area of circle is "<<ans;
}