#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    //insert
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(3);
    //print

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
   cout<<endl; 
}
