class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hash = {}
        for i in nums:
            if i in hash:
                hash[i]++
            else:
                hash[i] = 1
        answer = []
        for i in hash:
            if(hash[i - hash])
           
        