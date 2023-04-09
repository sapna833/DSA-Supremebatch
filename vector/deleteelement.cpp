#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,3,5};
    //print vector
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
      cout<<endl;
     // for delete element
      arr.pop_back();
      //print deleted
       for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
      cout<<endl;

}