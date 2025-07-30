// Hollow Rectangle

#include <iostream>
using namespace std;

int main()
{
    int row ,col;
    cin>>row>>col;
    for (int i = 0; i < row; i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            cout<<"* ";
            for(int k=0;k<col-2;k++)
            {
                cout<<"  ";
            }
            cout << "* ";
            cout<<endl;
        }
    }
}