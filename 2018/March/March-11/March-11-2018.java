//***************************
//*  191. Number of 1 Bits  *
//***************************

//O(1) solution [Because n is a 32-bit integer, and that's what is looped through]
public class Solution 
{
    public int hammingWeight(int n) 
    {
        int count = 0;
        long check = 0;
        long m = n;
        int i = 0;
        
        while(i < 32)
        {
            check = m & 1;
            if(check==1)
            {
                count += 1;
            }
            m >>= 1;
            i++;
        }
        
        return count;
    }
}