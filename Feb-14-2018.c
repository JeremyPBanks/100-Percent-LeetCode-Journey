//****************
//*  1. Two Sum  *
//****************

//O(n) solution
typedef struct Node
{
  int val;
  int actualVal;
}*Node;

int* twoSum(int* nums, int numsSize, int target)
{
    int *returnArr = (int*)malloc(sizeof(int)*2);
	if (numsSize < 2)
	{
		return returnArr;
	}

    int hashSize = 3000;
	Node *hashTable = (Node*)malloc(sizeof(Node)*hashSize);
    
    int j = 0;
    for (j = 0; j < hashSize; j++)
    {
        hashTable[j] = (Node*)malloc(sizeof(Node));
        hashTable[j]->val = 0;
        hashTable[j]->actualVal = 0;
    }
    
    int key = abs(nums[0]) % hashSize;
	hashTable[key]->val = 0;
    hashTable[key]->actualVal = nums[0];
	int i = 1;
	int temp = 0;
    int check = 0;
	for (i=1;i<numsSize;i++)
	{
		temp = target - nums[i];
        key = abs(temp) % hashSize;
        check = hashTable[key]->actualVal + nums[i];
		if (((hashTable[key]->actualVal != 0 || hashTable[key]->val != 0) && check == target) || (nums[i] == 0 && hashTable[key]->val == 0 && hashTable[key]->actualVal == 0))
		{
			returnArr[0] = hashTable[key]->val;
			returnArr[1] = i;
			break;
		}
        key = abs(nums[i]) % hashSize;
        hashTable[key]->val = i;
        hashTable[key]->actualVal = nums[i];
	}
	return returnArr;
}