//***************************
//*  191. Number of 1 Bits  *
//***************************

//O(1) solution [Because n is a 32-bit integer, and that's what is looped through]
public class Solution 
{
    public int HammingWeight(uint n) 
    {
        int count = 0;
        for(n = n; n != 0; n >>= 1)
        {
            if((n & 1) == 1)
            {
                count++;
            }
        }
        
        return count;
    }
}