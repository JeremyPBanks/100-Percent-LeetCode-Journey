#************************
#*  2. Add Two Numbers  *
#************************


#O(max(n,m)) solution
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        ansHead = ListNode(0)
        ansHead.next = None
        ansPtr = ansHead
        summedOver10 = 0
        
        while l1 is not None or l2 is not None:
            if l1 is not None and l2 is not None:
                ansPtr.val = l1.val + l2.val + summedOver10
                l1 = l1.next
                l2 = l2.next
            elif l1 is None:
                ansPtr.val = l2.val + summedOver10
                l2 = l2.next
            elif l2 is None:
                ansPtr.val = l1.val + summedOver10
                l1 = l1.next
                
            if ansPtr.val > 9:
                summedOver10 = 1
                ansPtr.val -= 10
            else:
                summedOver10 = 0  
            
            if l1 is not None or l2 is not None or summedOver10 > 0:
                ansPtr.next = ListNode(summedOver10)
                ansPtr = ansPtr.next
                
        return ansHead