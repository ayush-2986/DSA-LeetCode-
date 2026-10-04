class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = dict()
        for num in nums:
            if num not in count:
                count[num] = 1
            else:
                count[num] += 1
        
        max = 0
        max_count = 0
        for c, v in count.items():
            if max_count < v:
                max = c
                max_count = v

        return max
