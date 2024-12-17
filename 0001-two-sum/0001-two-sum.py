class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        firstIndex = -1
        secondIndex = -1

        for i in range(len(nums)):
            if target - nums[i] in nums and nums.index(target - nums[i]) != i:
                firstIndex = i
                secondIndex = nums.index(target - nums[i])
                return [firstIndex, secondIndex]


        return