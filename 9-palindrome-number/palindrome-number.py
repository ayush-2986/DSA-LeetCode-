class Solution(object):
    def isPalindrome(self, x):
        x_str = str(x)
        return True if x_str==x_str[::-1] else False
        