class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = defaultdict(int)
        for num in nums:
            count[num] += 1
        
        major = len(nums)/2
        for n, v in count.items():
            if v>major:
                return n
