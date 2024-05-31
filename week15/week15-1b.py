class Solution:  # week15-1.py LeetCode 3158 要找出現2次
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table = {}  # 大括號: table[num] 對應的次數
        ans = 0  
        for num in nums:  # nums 每個數字輪一次
            if num in table:  # 出現過的話
                table[num] += 1  # 次數+1
                ans = ans ^ num  # 把答案,照題目要求 XOR 混起來
            else:
                table[num] = 1  # 第1次出現

        return ans
