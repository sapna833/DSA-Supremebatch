#include<iostream>
#include<limits.h>
using namespace std;
int getmax(int arr[3][3],int rows,int cols){
    int maxi=INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
        
    }
   return maxi;
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
     cout<<getmax(arr,rows,cols);
    return 0;
}
    
