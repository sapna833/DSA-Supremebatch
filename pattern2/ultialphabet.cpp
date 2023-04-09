#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int c;
        for (int c = 0; c < i+1; c++)
        {
            int ans=c+1;
            char ch=ans+ 'A'-1;
            cout<<ch;
        }
       //reverse
       for (int c=i; c >=1; c=c-1)
       {
        int ans=c;
        char ch=ans+'A'-1;
        cout<<ch;
       }
      cout<<endl;  
    }
    
}