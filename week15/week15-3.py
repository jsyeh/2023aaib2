# week15-5.py LeetCode 1208. Get Equal Substrings Within Budget 先寫到一半
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s) # 字串的迴圈
        for i in range(N):
            print(s[i], t[i])
        return ans