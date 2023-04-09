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
        //yha space row ke equal h phle 0 phir 1 phir 2
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        //for stars
        //star phle n phir n-1 phir n-2 or 1 2 row ke equal hn isliye formula n-i
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}