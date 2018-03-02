#****************
#*  1. Two Sum  *
#****************

#O(n) solution
class Solution(object):
    def twoSum(self, nums, target):
		myDict = {}
		numLen = len(nums)
		if numLen < 2:
			return None
		myDict[nums[0]] = 0
		for i in range(1,numLen):
			temp = target - nums[i]
			if temp in myDict:
				return [myDict[temp],i]
			else:
				myDict[nums[i]] = i
		return None