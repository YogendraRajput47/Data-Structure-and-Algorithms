// Memeset function in cpp
// 🔹 What is memset?

// memset is a standard library function in C++(from<cstring>)that is used to fill a block of memory with a particular value.
// memset(arr, 0, sizeof(arr));

// 🔹 ⚠️ Important Notes:

// memset works byte by byte.

// That means it’s safe for setting values like 0 or -1, but not for other integers.

// Example: memset(arr, 1, sizeof(arr)) won’t set elements to 1. It sets each byte to 0x01.

// Commonly used for:

// Initializing arrays (0 or -1).

// Resetting memory buffers.

// Dynamic memory initialization.

// ✅ Best Practice

// Use memset only for raw memory operations.

// For modern C++, prefer std::fill for arrays/vectors since it’s type-safe.

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int arr[5];
    // memset(arr,0,sizeof(arr));
    memset(arr,-1,sizeof(arr));

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}