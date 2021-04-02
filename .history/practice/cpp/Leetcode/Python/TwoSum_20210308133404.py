# class Solution:
#     def twoSum(self,nums,target):
#         answer = []
#         for i in range(0,len(nums)):
#             if (target - nums[i]) in nums:
#                 getIndex = nums.index(target - nums[i])
#                 if i != getIndex:
#                     answer.append(i)
#                     answer.append(nums.index(target - nums[i]))
#                     break;
#         return answer
    
# inp = list(map(int,input().split()))
# target = int(input())
# obj = Solution()
# print(obj.twoSum(inp,target))   

a 