//************************
//*  27. Remove Element  *
//************************

//O(n) solution
int removeElement(int* nums, int numsSize, int val) 
{
    int i = numsSize-1;
    int finalSize = numsSize;
    while(i >= 0)
    {
        if (nums[i] == val)
        {
            finalSize -= 1;
            memmove(&nums[i], &nums[i+1], (finalSize-i) * sizeof(nums[0]));
            nums[finalSize] = 0;
        }
        i--;
    }
    
    return finalSize;
}
