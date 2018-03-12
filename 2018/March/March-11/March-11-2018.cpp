//***************************
//*  191. Number of 1 Bits  *
//***************************

//O(1) solution [Because n is a 32-bit integer, and that's what is looped through]
class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int count = 0;
        uint32_t check = 0;
        
        while (n > 0)
        {
            check = n & 1;
            if (check == 1)
            {
                count++;
            }
            
            n >>= 1;
        }
        
        return count;
    }
};