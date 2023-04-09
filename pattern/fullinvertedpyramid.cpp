#include<iostream>
using namespace std;
 
 int main(){
    int n;
    cin>>n;
    //for fullpyramid 
        for(int i=0; i<n; i++){
        //spcaing
        for(int j = 1; j<n-i; j++){
            cout<<" ";
        }
        //print * 
        for (int j=0; j<2*i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
//for invertedpyramid
    for(int i=n; i>0; i--){
        //spcaing
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }
        //print * 
        for (int j=0; j<2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
 }
 //agar dono merge kr de toh figure dusra bann jeyagalike kajukatli(solid daimond)