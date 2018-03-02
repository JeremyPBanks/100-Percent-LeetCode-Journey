//****************
//*  1. Two Sum  *
//****************

//Go is okay, I guess, but the fact that the braces have to be directly next to the headers goes against my preferences

//O(n) solution
func twoSum(nums []int, target int) []int{
    finalArr := []int{0,0}
    
    myHashMap := make(map[int]int)
    
    myHashMap[nums[0]] = 0
    temp := 0
    numsLen := len(nums)
    
    for i := 1; i < numsLen; i++{
        temp = target - nums[i]
        _,check := myHashMap[temp]
        if check==true{
            finalArr[0] = myHashMap[temp]
            finalArr[1] = i
            break
        }
        
        myHashMap[nums[i]] = i
    }
    
    return finalArr
}