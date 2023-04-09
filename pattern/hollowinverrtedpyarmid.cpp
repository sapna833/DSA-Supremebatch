#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for (int i = 0; i <n ;i++)
    {
        for (int j= 0; j < n; j++)
    {
        // star print hoga n-i-1= phle 4,phir3,phir 2 aaise hi chlega
        if(i==0 || j==0 || j==n-i-1)
        {
            cout<<"*";
        }
        else{
            //for space
            cout<<" ";
        }
    }
        cout<<endl;
    }
}