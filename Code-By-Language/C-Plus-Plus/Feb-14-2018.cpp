//****************
//*  1. Two Sum  *
//****************

//O(n) solution
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i = 0;
        int j = 1;
        vector<int> array(2);
        std::unordered_map<int,int> myMap;
        int temp = 0;
        
        for (int i = 0; i < nums.size(); i++)
        {
            temp = target - nums[i];
            //cout << "Temp: " << temp << " i: " << i << "\n";
            if (myMap.count(temp))
            {
                array[0] = myMap[temp];
                array[1] = i;
                break;
            }
            myMap[nums[i]] = i;
        }
        
        return array;
    }
};
