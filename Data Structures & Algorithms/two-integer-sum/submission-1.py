class Solution:
    def twoSum(self, nums: List[int], target: int):
        seen = {} # key:value

        for i, num in enumerate(nums):
            need = target - num
            if need in seen:
                return [seen[need], i]
            # else just add to hash map
            seen[num] = i
       

        
        