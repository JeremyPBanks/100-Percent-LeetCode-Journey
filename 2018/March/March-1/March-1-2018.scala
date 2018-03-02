//****************
//*  1. Two Sum  *
//****************

//Better than Swift (screw those Optionals), but potentially very annoying

//O(n) solution
object Solution 
{
    def twoSum(nums: Array[Int], target: Int): Array[Int] = 
    {
        var returnArr = new Array[Int](2)
        returnArr(0) = 0
        returnArr(1) = 0
        var temp = 0
        var numsLen = nums.length
        var i = 0
        var myHashMap = scala.collection.mutable.Map(nums(0) -> 0)
        
        for (i<-1 to (numsLen-1))
        {
            temp = target - nums(i)
            
            if(myHashMap.contains(temp))
            {
                returnArr(0) = myHashMap(temp)
                returnArr(1) = i
            }
            
            myHashMap += (nums(i)->i)
        }
        
        returnArr
    }
}
