#include<iostream>
#include<vector>
using namespace std;
int main(){
    //intersection{
    vector<int>arr{1,2,2,4,5};
    vector<int>brr{1,2,4,7};
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
           for(int j = 0; j< brr.size(); j++){
            if(element==brr[j]){
                brr[j]=-1;
                ans.push_back(element);
            }
           }
     }
    for(auto value:ans){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}