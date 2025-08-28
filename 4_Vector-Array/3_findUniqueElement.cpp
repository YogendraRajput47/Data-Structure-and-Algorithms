#include <iostream>
#include <vector>

using namespace std;

int findUnique(vector<int>arr)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    // vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout<<"Unique Elment is : "<<uniqueElement<<endl;
}

// int main(){
//     vector<int>arr{1,2,4,2,1,3,6,5,5,6,4};

//     for(int i=0;i<arr.size();i++)
//     {
//         int num=arr[i];
//         int count=0;
//         int index;
//         for(int j=0;j<arr.size();j++)
//         {
//             if(num==arr[j])
//             {
//                 count++;
//                 index=j;
//             }
//         }
//         if(count==1)
//         {
//             cout<<"Unique "<<num<<" at index "<<index<<endl;
//         }
//     }
// }