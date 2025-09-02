#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Example input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();

    int totalItems = m * n;

    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;

    int count = 0;
    while (count < totalItems)
    {
        // Print starting row
        for (int i = startingCol; i <= endingCol && count < totalItems; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // Print ending col
        for (int i = startingRow; i <= endingRow && count < totalItems; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // Print ending row
        for (int i = endingCol; i >= startingCol && count < totalItems; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // Print starting col
        for (int i = endingRow; i >= startingRow && count < totalItems; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    // Print spiral order
    cout << "Spiral Order: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
