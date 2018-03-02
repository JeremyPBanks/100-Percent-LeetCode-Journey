//****************
//*  1. Two Sum  *
//****************

//I already hate this language. Optionals suck

//O(n) solution
class Solution 
{
    func twoSum(_ nums: [Int], _ target: Int) -> [Int] 
    {
        var returnArr:[Int] = [0,0]
        var temp = 0
        var myDict = [Int:Int]()
        var len = nums.count
        myDict[nums[0]] = 0
        var i = 1
        
        while i < len
        {
            temp = target - nums[i]
            var newVal: Int?
            if let newVal = myDict[temp]
            {
                returnArr[0] = newVal
                returnArr[1] = i
                return returnArr
            }
            myDict[nums[i]] = i
            i += 1
        }
        
        return returnArr
    }
}