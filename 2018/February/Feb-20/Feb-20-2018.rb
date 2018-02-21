#****************
#*  1. Two Sum  *
#****************

#O(n) solution
def two_sum(nums, target)
    numsLen = nums.size
    returnArr = Array.new(2,0)
    myHashTable = {nums[0]=>0}
    temp = 0
    
    if numsLen < 2
        return returnArr
    else
        for i in 1..numsLen-1
            temp = target - nums[i]
            if myHashTable.has_key?(temp) == true
                returnArr[0] = myHashTable[temp]
                returnArr[1] = i
                break
            else
                myHashTable.store(nums[i],i)
            end
        end
    end
    return returnArr
end
