class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = defaultdict(int)
        for num in nums:
            count[num] += 1
        
        for n, v in count.items():
            if v>len(nums)/2:
                return n
