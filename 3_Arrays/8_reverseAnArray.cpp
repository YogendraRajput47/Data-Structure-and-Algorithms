#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60,70};
    int size = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = size - 1;

    cout << "Before swap: ";
    printArray(arr, size);

    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;

        // Inbuilt functionality
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    cout << "After swap: ";
    printArray(arr, size);
}