#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,0,0,1};
    int size=5;
    int numzero=0;
    int numones=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0){
            numzero++;
        }
        if (arr[i]==1)
        {
            numones++;
        }
    }
    cout<<"number of zeros"<<numzero<<endl;
    cout<<"number of ones"<<numones<<endl;

     return 0;
    
}