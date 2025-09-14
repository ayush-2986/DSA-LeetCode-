class Solution(object):
    def isPalindrome(self, a):
        a = a.lower()

        a_new = "".join(char for char in a if char.isalnum())

        return True if a_new == a_new[::-1] else False