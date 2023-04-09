#include <iostream>
#include <vector>
using namespace std;
int find_missing_element(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (nums[mid] == mid + 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left + 1;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8};
    int missing_element = find_missing_element(nums);
    
    cout << "Missing element is: " << missing_element << endl;
    
    return 0;
}