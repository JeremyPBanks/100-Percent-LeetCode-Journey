//************************
//*  2. Add Two Numbers  *
//************************


//O(max(n,m)) solution
 public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int x) { val = x; }
}

public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) 
    {
        ListNode ans = new ListNode(0);
        ListNode ptr = ans;
        int extra = 0;
        
        while (l1 != null || l2 != null)
        {
            if (l1 != null && l2 != null)
            {
                ptr.val = l1.val + l2.val + extra;
                l1 = l1.next;
                l2 = l2.next;
            }
            else if (l1 != null)
            {
                ptr.val = l1.val + extra;
                l1 = l1.next;
            }
            else
            {
                ptr.val = l2.val + extra;
                l2 = l2.next;
            }
            
            if (ptr.val >= 10)
            {
                ptr.val -= 10;
                extra = 1;
            }
            else
            {
                extra = 0;
            }
            
            if (l1 != null || l2 != null)
            {
                ptr.next = new ListNode(0);
                ptr = ptr.next;
            }
            else if (extra == 1)
            {
                ptr.next = new ListNode(extra);
            }
        }
        
        return ans;
    }
}