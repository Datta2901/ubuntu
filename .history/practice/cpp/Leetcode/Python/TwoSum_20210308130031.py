class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        answer = []
        for i in range(0,nums):
            if abs(nums[i] - hash[nums[i]]) in hash:
                answer.append(i)
           
        