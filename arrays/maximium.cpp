#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    // int maxi=INT_FAST16_MIN;
    // for (int i = 0; i < 5; i++)
    // {
    //     if(arr[i]>maxi){
    //         maxi=arr[i];

    //     }
    // 
    // cout<<"maximum number is"<<maxi<<endl;
    //for minimum number
      int min= INT8_MAX;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]<min){
            min=arr[i];

        }
    }
    cout<<"minimum number is"<<min<<endl;
    return 0;

}