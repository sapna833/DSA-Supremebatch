#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int col;
        for (col = 0;col < i+1; col++)
        {
            cout<<col+1;
           // col=col-1;
        }
       // reversecounting
       for ( col = i;col>= 1; col=col-1)
       {
           cout<<col;
       }
       cout<<endl; 
    }
   return 0; 
}