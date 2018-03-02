//************************
//*  2. Add Two Numbers  *
//************************


//O(max(n,m)) solution

public class ListNode 
{
    int val;
    ListNode next;
    ListNode(int x) { val = x; }
}

class Solution 
{
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) 
    {
        int summedToTenOrMore = 0;
        ListNode head = new ListNode(0);
        ListNode ptr = head;
        
        while (l1 != null || l2 != null)
        {
            if (l1 != null && l2 == null)
            {
                head.val = l1.val;
                head.val += summedToTenOrMore;
                if (head.val > 9)
                {
                    summedToTenOrMore = 1;
                    head.val %= 10;
                }
                else
                {
                    summedToTenOrMore = 0;
                }
                l1 = l1.next;
            } 
            else if (l1 == null && l2 != null)
            {
                head.val = l2.val;
                head.val += summedToTenOrMore;
                if (head.val > 9)
                {
                    summedToTenOrMore = 1;
                    head.val %= 10;
                }
                else
                {
                    summedToTenOrMore = 0;
                }
                l2 = l2.next;
            }
            else
            {
                head.val = l1.val + l2.val;
                head.val += summedToTenOrMore;
                if (head.val > 9)
                {
                    summedToTenOrMore = 1;
                    head.val %= 10;
                }
                else
                {
                    summedToTenOrMore = 0;
                }
                
                l1 = l1.next;
                l2 = l2.next;
            }
            
            if (l1 != null || l2 != null)
            {
                head.next = new ListNode(0);
                head = head.next;
            }
            else if (summedToTenOrMore == 1)
            {
                head.next = new ListNode(summedToTenOrMore);
            }
        }
        return ptr;
    }
}




//************************
//*  7. Reverse Integer  *
//************************

//O(n) solution
class Solution 
{
    public int reverse(int x) 
    {
        String s = Integer.toString(x);
        int sLen = s.length();
        char[] charArr = s.toCharArray();
        char temp = ' ';
        int start = 0;
        
        if (charArr[0] == '-')
        {
            start = 1;
            sLen += 1;
        }
        
        for (int i = start; i < (sLen/2); i++)
        {
            temp = charArr[i];
            charArr[i] = charArr[sLen-i-1];
            charArr[sLen-i-1] = temp;
        }
        
        s = String.valueOf(charArr);
        
        try
        {    
            x = Integer.parseInt(s);
        }
        catch (Exception e)
        {
            return 0;
        }
        return x;
    }
}
