//****************
//*  1. Two Sum  *
//****************

//I know it's meant to be similar to Java, it is based off of it, but I struggle to see the actual use of it as an alternative

//O(n) solution
class Solution 
{
    fun twoSum(nums: IntArray, target: Int): IntArray 
    {
        var temp:Int = 0
        val returnArr: IntArray = intArrayOf(0,0)
        val myHashMap = HashMap<Int, Int>()
        
        for (i in nums.indices)
        {
            temp = target - nums[i]
            
            if(myHashMap.contains(temp))
            {
                returnArr[0] = myHashMap.get(temp)!!
                returnArr[1] = i
                return returnArr
            }

            myHashMap.put(nums[i],i)
        }
        
        return returnArr
    }
}
