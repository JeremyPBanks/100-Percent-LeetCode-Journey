//****************
//*  1. Two Sum  *
//****************

//O(n) solution
public class Solution 
{
    public int[] TwoSum(int[] nums, int target) 
    {
        IDictionary<int, int> myDict = new Dictionary<int, int>();
        int[] finalArr = new int[2];
        int numsLen = nums.Length;
        
        if (numsLen < 2)
        {
            return null;
        }
        
        myDict[nums[0]] = 0;
        int temp = 0;
        
        for (int i = 1; i < numsLen; i++)
        {
            temp = target - nums[i];
            if (myDict.ContainsKey(temp))
            {
                finalArr[0] = myDict[temp];
                finalArr[1] = i;
                break;
            }
            
            myDict[nums[i]] = i;
        }
        
        return finalArr;
    }
}
