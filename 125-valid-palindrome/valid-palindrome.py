class Solution(object):
    def isPalindrome(self, a):
        """
        :type s: str
        :rtype: bool
        """
        a = a.lower()

        a_new = ""

        for i in range(len(a)):
            if str(a[i]).isalnum():
                a_new = a_new+a[i]

        if a_new == a_new[::-1]:
            return True
        else:
            return False