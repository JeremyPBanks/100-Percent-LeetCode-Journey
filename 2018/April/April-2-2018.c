
//O(n) time, O(255) [for alpha]=O(1) space solution
int lengthOfLongestSubstring(char* s) 
{
    int len = strlen(s);
    int init = 0;
    int i = 0;
    char alpha[255];
    bzero(alpha,255);
    
    for(i=0;i<len;i++)
    {
        int index = s[i];
        if (alpha[index] == 0)
        {
            alpha[index]++;
            init++;
        }
        else
        {
            break;
        }
    }
    
    bzero(alpha,255);
    int curr = 0;
    int max = init;
    int last = 1;
    
    for(i=1;i<len;i++)
    {
        int index = s[i];
        if (alpha[index] == 0)
        {
            alpha[index]++;
            curr++;
        }
        else
        {
            bzero(alpha,255);
            if (curr > max)
            {
                max = curr;
            }
            
            i = last;
            last += 1;
            curr = 0;
        }
    }
    
    if (curr > max)
    {
        max = curr;
    }
    
    return max;
}
