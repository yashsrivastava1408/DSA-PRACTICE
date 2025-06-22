#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq1 = 0, freq2 = 0;
        int ele1 = INT_MIN, ele2 = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] == ele1) {
                freq1++;
            }
            else if (nums[i] == ele2) {
                freq2++;
            }
            else if (freq1 == 0 && nums[i] != ele2) {
                freq1 = 1;
                ele1 = nums[i];
            }
            else if (freq2 == 0 && nums[i] != ele1) {
                freq2 = 1;
                ele2 = nums[i];
            }
            else {
                freq1--;
                freq2--;
            }
        }

        freq1 = 0;
        freq2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == ele1) freq1++;
            else if (nums[i] == ele2) freq2++;
        }

        vector<int> ans;
        int mini = (n / 3) + 1;
        if (freq1 >= mini) ans.push_back(ele1);
        if (freq2 >= mini) ans.push_back(ele2);

        return ans;
    }
};
