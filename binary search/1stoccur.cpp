#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr{1,3,3,3,3,4,4,4,4,7};
    int target=4;


// auto ans2=lower_bound(arr.begin(),arr.end(),target);
// {
// cout<<"ans 2 is"<<ans2-arr.begin() <<endl;
// return 0;
// }
auto ans2=upper_bound(arr.begin(),arr.end(),target);
{
cout<<"ans 2 is"<<ans2-arr.begin() <<endl;
return 0;
}
}