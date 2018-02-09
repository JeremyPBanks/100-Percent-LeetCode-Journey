//****************
//*  1. Two Sum  *
//****************

//O(n) solution
class Solution 
{
    public int[] twoSum(int[] nums, int target) 
    {
        int[] returnArr = new int[2];
		int numsLen = nums.length;
		int temp = 0;
		
		HashMap<Integer,Integer> myMap = new HashMap<>();
		if (numsLen < 2)
		{
			return null;
		}
		
		myMap.put(nums[0],0);
		
		for (int i = 1; i < numsLen; i++)
		{
			temp = target - nums[i];
			if (myMap.containsKey(temp))
			{
				returnArr[0] = myMap.get(temp);
				returnArr[1] = i;
				return returnArr;
			}
			myMap.put(nums[i],i);
		}
		return null;
    }
}