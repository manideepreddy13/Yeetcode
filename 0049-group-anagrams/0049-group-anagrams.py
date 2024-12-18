class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs) == 0 or len(strs) == 1:
            return [strs]

        pre_result = {}
        for string in strs:
            sorted_string = ''.join(sorted(string))
            if sorted_string not in pre_result.keys():
                pre_result[sorted_string] = [string]
            else:
                pre_result[sorted_string].append(string)

        return list(pre_result.values())