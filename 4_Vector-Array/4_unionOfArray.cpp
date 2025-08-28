#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 1};
    vector<int> brr = {2, 4, 6, 8, 1};
    vector<int> crr;

    // Step 1: Remove duplicates inside arr + mark common elements in brr
    for (int i = 0; i < arr.size(); i++)
    {
        // mark duplicate in arr
        for (int k = i + 1; k < arr.size(); k++)
        {
            if (arr[i] == arr[k])
            {
                arr[k] = INT_MIN;
            }
        }
        // mark common in brr
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }

    // Step 2: Add valid arr elements
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != INT_MIN)
            crr.push_back(arr[i]);
    }

    // Step 3: Add valid brr elements
    for (int j = 0; j < brr.size(); j++)
    {
        if (brr[j] != INT_MIN)
            crr.push_back(brr[j]);
    }

    // Step 4: Print result
    cout << "Union = { ";
    for (int i = 0; i < crr.size(); i++)
    {
        cout << crr[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}
