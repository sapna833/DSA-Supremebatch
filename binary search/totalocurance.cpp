#include<iostream>
#include<vector>
using namespace std;
int firstoccurance(vector<int>arr,int target)
{
    int s=0;
    int e=arr.size()-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target)
        {
            //ans store and then left
            ans=mid;
            e=mid-1;
        }
        else if(target>arr[mid])
        {
            s=mid+1;
        }
        else if(target<arr[mid])
        {
             //left search
            e=mid-1;
             }
             mid=(s+e)/2;
    }
return ans;
}
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
    vector<int>v{1,3,4,4,6,7};
    int target=4;
    int ans2= lastoccurance(v,target);
    cout<<"last occurance at"<<ans2<<endl;
    int ans=  firstoccurance(v,target);
    cout<<" ans is"<<ans<<endl;
    return 0;
}