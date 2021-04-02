class Solution:
    def twoSum(self,nums,target):
        for i in range(0,len(nums)):
            if (target - nums[i]) in nums:
                getIndex = nums.index(target - nums[i])
                if i != getIndex:
                    return[i,nums.index(target - nums[i])]
                    break;

    
inp = list(map(int,input().split()))
target = int(input())
obj = Solution()
print(obj.twoSum(inp,target))   

