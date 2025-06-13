#include<iostream>
#include<vector>
#include <climits>

using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cursum=0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            cursum+=nums[i];
            maxi=max(cursum,maxi);
            if(cursum<0){
                cursum=0;
            }
        }
        return maxi;
    }
};
