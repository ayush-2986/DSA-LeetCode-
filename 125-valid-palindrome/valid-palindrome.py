class Solution(object):
    def isPalindrome(self, a):
        a = a.lower()

        a_new = "".join(char for char in a if char.isalnum())
        if a_new == a_new[::-1]:
            return True
        else:
            return False