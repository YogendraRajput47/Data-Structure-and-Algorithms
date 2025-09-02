#include<iostream>
using namespace std;


void printRowSum(int arr[][4],int rows,int cols){

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << " is " << sum << endl;
    }
}

void printCoulmnSum(int arr[][4], int rows,  int cols){
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++)
        {
            sum+=arr[j][i];
        }
        cout<<"Sum of Coulumn "<<i+1<<" is "<<sum<<endl;
    }
};

int main(){
    int arr[5][4]={
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {2,4,6,8},
        {1,9,9,6}
    };

    int rows=5;
    int cols=4;
    printRowSum(arr,rows,cols);
    cout<<endl;
    printCoulmnSum(arr,rows,cols);

}