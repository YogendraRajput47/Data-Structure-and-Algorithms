// A vector in C++ is a dynamic array provided by the Standard Template Library(STL) that can automatically grow or shrink in size when elements are added or removed. Unlike normal arrays, vectors manage memory on their own and provide many useful built-in functions for insertion, deletion, access, and iteration.

// Header file: <vector>

// Namespace: std

// Syntax: vector<data_type> name;


#include<iostream>
 #include<vector>

 using namespace std;

 int  main(){
    // Creating Vector
    vector<int>arr;

    cout<<"Default Size of vector: "<<arr.size()<<endl;
    cout<<"Default capacity of vector: "<<arr.capacity()<<endl;

    // insertion
    arr.push_back(5);
    arr.push_back(6);

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //remove element  or delete
    arr.pop_back();

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Second way of initialization
    // Default initialize ->0

    vector<int>brr(10);
    cout<<"Size of brr :"<<brr.size()<<endl;
    cout << "Capacity of brr :" << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;

    vector<int> crr(10,-101);

    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }

    cout << endl;

    // Initialization at run time

    int n;
    cout << "enter the size of array: ";
    cin>>n;
    vector<int> drr(n,-1);
    cout << "Size of drr :" << drr.size() << endl;
    cout << "Capacity of drr :" << drr.capacity() << endl;

    for (int i = 0; i < drr.size(); i++)
    {
        cout << drr[i] << " ";
    }

    cout << endl;

    // Final way of vector initilization
    vector<int>err{10,20,30,40};
    for(int i=0;i<err.size();i++)
    {
        cout<<err[i]<<" ";
    }
    cout<<endl;
    cout << "Vector err is empty or not: " << err.empty() << endl;

    vector<int>frr;
    cout << "Vector frr is empty or not: " << frr.empty() << endl;
 }