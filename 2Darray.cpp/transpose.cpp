#include<iostream>
using namespace std;
void transpose(int arr[][3],int r,int c,int transposearr[][3])
{
    for (int i = 0; i < r; i++)
    {
    for (int j = 0; j < c; j++)
    {
        transposearr[j][i] =arr[i][j];

    }
    
    }
    }
    void printarray(int arr[][3],int r,int c){
        for (int i = 0; i < r; i++)
        {
            for (int j= 0; j < c; j++)
            {
            cout<<arr[i][j]<<" ";
            }
           cout<<endl; 
        }
        
    }
    int main(){
    int arr[3][3];
    int rows=3,cols=3;
    for (int i = 0; i < rows; i++)
    {
     for (int j= 0; j< cols; j++)
     {
     
     cin>>arr[i][j];
     }
    }
     for (int i = 0; i < rows; i++)
    {
     for (int j= 0; j< cols; j++)
     {
     cout<<arr[i][j]<<" ";
     }

     cout<<endl;
    }
    cout<<"printing array"<<endl;
    printarray(arr,rows,cols);
    cout<<"starting transpose"<<endl;
    int transposearr[3][3];
    transpose(arr,rows,cols,transposearr);
    cout<<"printing array again"<<endl;
    printarray(transposearr,rows,cols);
    return 0;


    }