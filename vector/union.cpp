#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]{1,2,3,4,5};
    int sizea=5;
  int brr[]{11,12,13,14,15};
    int sizeb=5;
    vector<int>ans;
    //push all elements of vector arr
    for (int i = 0; i <sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    //push all elements of vector brr
     for (int j= 0; j<sizeb; j++)
    {
        ans.push_back(brr[j]);
    }
    //print an
    cout<<"printing ans array"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    
}