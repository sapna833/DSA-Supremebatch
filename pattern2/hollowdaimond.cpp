#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //hollow daimond
    for (int i = 0; i < n; i++)
    {
        //for space

        for (int j = 0; j < n-i-1; j++)
        {
        cout<<" ";

        }
        //for stars
        for (int j = 0; j < 2*i+1; j++)
        {
            //if first character and if last character

            if(j==0|| j==2*i ){
                cout<<"* ";
            }
        
     else{
        cout<<" ";
     }   
       }
       cout<<endl;
    }
//noche wala part
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        cout<<" ";
    }


//star
for (int j = 0; j <2*n-2* i-1; j++)
{
    if(j==0||j==2*n-2*i-2){
        cout<<"* ";
    }
    else{
        cout<<" ";
    }
    
}
cout<<endl;
}    
}