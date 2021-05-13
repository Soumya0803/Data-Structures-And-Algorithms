"""
Problem: Two Sum

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 103
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
"""

"""
Approach 1: Brute Force
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range (i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    return [i,j]
"""
Complexity Analysis

Time complexity : O(n^2). For each element, we try to find its complement by looping through the rest of array which takes O(n)time. Therefore, the time complexity is O(n^2).

Space complexity : O(1)
"""
                    
"""
Approch 2: One-pass Hash Table
"""
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myHash={}
        for i,val in enumerate(nums):
            if target-val in myHash:
                return [myHash[target-val],i]
            myHash[val]=i
            
"""
Complexity Analysis:

Time complexity : O(n). We traverse the list containing nn elements only once. Each look up in the table costs only O(1) time.

Space complexity : O(n). The extra space required depends on the number of items stored in the hash table, which stores at most nn elements.
"""