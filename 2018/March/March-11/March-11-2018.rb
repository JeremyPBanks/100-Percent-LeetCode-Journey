#***************************
#*  191. Number of 1 Bits  *
#***************************

#O(1) solution [Because n is a 32-bit integer, and that's what is recursed through]
def hamming_weight(n)
    count = 0
    for i in 0..31
        if (n & 1) == 1
            count = count + 1
        end
        n = n >> 1
    end
    
    return count
end