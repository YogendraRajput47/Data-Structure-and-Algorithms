// Numeric full pyramid

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int j;
    for (int row = 0; row < n; row++)
    {
        for (int k = 0; k < n - (row + 1); k++)
        {
            cout << " ";
        }
        int count = 2 * row + 1;
        for (j = 0; j < 2 * row + 1; j++)
        {
            if (j >= row + 1)
            {
                count--;
                cout << count << " ";
            }
            else
            {
                cout << j + row + 1 << " ";
            }
        }
        cout << endl;

        cout << endl;
    }
}