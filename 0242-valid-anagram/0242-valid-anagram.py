class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        letter_count_s = {}

        for letter in s:
            if letter not in letter_count_s:
                letter_count_s[letter] = 1
            else:
                letter_count_s[letter] += 1
        
        letter_count_t = {}

        for letter in t:
            if letter not in letter_count_t:
                letter_count_t[letter] = 1
            else:
                letter_count_t[letter] += 1

        for key,value in letter_count_t.items():
            if key not in letter_count_s.keys():
                return False

            if letter_count_s[key] != value:
                return False
        
        return True