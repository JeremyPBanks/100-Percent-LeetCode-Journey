//****************
//*  1. Two Sum  *
//****************

//O(n) solution
int* twoSum(int* nums, int numsSize, int target)
{
    int *returnArr = (int*)malloc(sizeof(int)*2);
	if (numsSize < 2)
	{
		return NULL;
	}
	int hashTable[1024];
	hashTable[0] = nums[0];
	int i = 1;
	int temp = 0;
	for (i=1;i<numsSize;i++)
	{
		temp = target - nums[i];
		if (hashTable[temp])
		{
			returnArr[0] = hashTable[temp];
			returnArr[1] = i;
			return returnArr;
		}
	}
	return NULL;
}