/*

Given an array of integers, return indices of the two numbers 
such that they add up to a specific target.

You may assume that each input would have exactly 
one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]


/*
         * Two-pass Hash Table solution
         *
         * Time complexity: O(n)
         * Sapce complexity: O(n)
         
        vector<int> twoSum_ans2(vector<int>& nums, int target) {
            unordered_map<int, int> mapping;

            for (int i = 0; i < nums.size(); i++) {
                mapping.insert({nums[i], i});
                //mapping[nums[i]] = i;
            }

            for (int i = 0; i < nums.size(); i++) {
                auto j = mapping.find(target - nums[i]);
                if (j != mapping.end() && j->second != i)
                    return vector<int>{i, j->second};
            }

            return vector<int>{};
        }




 */

//Best Case Algorithmic Complexity = O(n^2)
//Worst Case Algorithmic Complexity = O(n^2)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int valueOne_; 
        int valueTwo_;
        vector<int> ans{};
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        
    
        return ans; 
    }
    
    
};
