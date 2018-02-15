//****************
//*  1. Two Sum  *
//****************

//O(n) solution
var twoSum = function(nums, target) 
{
    var myDict = {};
    var finalArr = new Array(0,0);
    var numsLen = nums.length;
    
    myDict[nums[0]] = 0;
    var temp = 0;
    
    for (var i = 1; i < numsLen; i++) 
    { 
        temp = target - nums[i];
        if (temp in myDict)
        {
            finalArr[0] = myDict[temp];
            finalArr[1] = i;
            break;
        }
        
        myDict[nums[i]] = i;
    }
    
    return finalArr;
};
