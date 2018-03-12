#***************************
#*  191. Number of 1 Bits  *
#***************************

#O(1) solution [Because n is a 32-bit integer, and that's what is recursed through]
class Solution(object):
    def hammingWeight(self, n):
        return recurse(n,0)
    
def recurse(n,c):
    if n == 0:
        return c
    return recurse(n>>1,c+(n & 1))