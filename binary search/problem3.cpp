#include<iostream>
#include<vector>
using namespace std;
int lastoccurance(vector<int>arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target)
        {
            //ans store
            ans=mid;
            //right search
            s=mid+1;
            }
            else if(target<arr[mid])
            {
                //left search
                e=mid-1;
            }
            else if(target>arr[mid])
            {
                //right search
                s=mid+1;
            }
            mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int>v{8,3,6,9,5,10,2,5,3};
    int target=5;
    int ans= lastoccurance(v,target);
    cout<<"last occurance at"<<ans<<endl;
    return 0;
}