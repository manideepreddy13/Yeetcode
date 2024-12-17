class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        elements_count = {}
        for i in nums:
            if i not in elements_count:
                elements_count[i] = 1
            else:
                elements_count[i] += 1
        
        for element,value in elements_count.items():
            if value >= 2:
                return True
                break
    
        return False