#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for (int i = 0; i <=n;i++)
    {
        for (int j= 0; j <=i; j++)
    {
        // star print hoga n-i-1= phle 4,phir3,phir 2 aaise hi chlega
        if(i==j|| j==0|| i==n)
        {
            cout<<"* ";
        }
        else{
            //for space
            cout<<"  ";
        }
    }
        cout<<endl;
    }
}