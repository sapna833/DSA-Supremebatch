#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //outer loop
    for (int i = 0; i < n; i++)
    {
        //spacing
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        //for stars
        for (int j = 0; j < i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}