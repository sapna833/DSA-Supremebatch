#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        //row+1 elements print krne wala hai
        int start=i+1;
        for (int j = 0; j < i+1; j++)
        {
            cout<<start<<" ";
            start =start+1;
        }
        cout<<endl;
    }
    
}