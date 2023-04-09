#include<iostream>
using namespace std;
 
 int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        //spcaing
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }
        //print * 
        for (int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

 }
 //second method
//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      for (int i = 0; i < n; i++)
//     {
//         //for spacing
//         //
//         for(int k=n-1;k>i;k--){
//         cout<<" ";
//     }
//     //for printing*
//         for (int j= 0; j < i*2+1; j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//      }return 0;
//      }