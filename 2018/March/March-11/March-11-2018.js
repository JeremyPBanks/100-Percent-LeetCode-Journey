//***************************
//*  191. Number of 1 Bits  *
//***************************

//O(1) solution [Because n is a 32-bit integer, and that's what is looped through]
var hammingWeight = function(n)
{
    var count = 0;
    var i = 0;
    var bits = 0;
    
    while (i < 32)
    {
        bits = n & 1;
        if (bits == 1)
        {
            count += 1;
        };
        
        i += 1;
        n >>= 1;
    };
    
    return count;
};