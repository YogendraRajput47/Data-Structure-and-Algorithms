#include <iostream>
#include <vector>
#include <set>
#include <limits.h>
using namespace std;

void findUnion(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = i+1; j < A.size(); j++)
        {
            if (A[i] == A[j])
            {
                A[j] = INT_MIN;
            }
        }
    }

}

int main()
{
    // set<int> st;
    vector<int>ans;
    int i, j, k;
    i = j = k = 0;
    vector<int> A{11, 13, 11, 45, 62, 72, 79, 90, 11};

    vector<int> B{11, 24, 11, 31, 62, 74, 89, 89, 96};

    vector<int> C{11, 48, 11, 60, 62, 65, 88};

    findUnion(A);
    findUnion(B);
    findUnion(C);

    while (i < A.size() && j < B.size() && k < C.size())
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            ans.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < C[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

       for(auto x:ans)
       {
        cout<<x<<" ";
       }
}