class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        size = len(nums)
        if size==0:
            return []

        ranges = []
        start = nums[0]

                
        for i in range(0, size-1):
            if nums[i]+1 == nums[i+1]:
                continue
            else:
                if start == nums[i]:
                    ranges.append(str(nums[i]))
                else:
                    ranges.append(str(start) + "->" +str(nums[i]))
                start = nums[i+1]
        
        if start == nums[size-1]:
            ranges.append(str(nums[size-1]))
        else:
            ranges.append(str(start) + "->" +str(nums[size-1]))

        return ranges