//************************
//*  2. Add Two Numbers  *
//************************


//O(max(n,m)) solution
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *ansHead = new ListNode(0);
        ListNode *ptr = ansHead;
        int summedOver10 = 0;
        
        while (l1 != NULL || l2 != NULL)
        {
            if (l1 != NULL && l2 != NULL)
            {
                ptr->val = l1->val + l2->val + summedOver10;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if (l1 != NULL)
            {
                ptr->val = l1->val + summedOver10;
                l1 = l1->next;
            }
            else if (l2 != NULL)
            {
                ptr->val = l2->val + summedOver10;
                l2 = l2->next;
            }
            
            if (ptr->val > 9)
            {
                summedOver10 = 1;
                ptr->val -= 10;
            }
            else
            {
                summedOver10 = 0;
            }
            
            if (l1 != NULL || l2 != NULL || summedOver10 > 0)
            {
                ptr->next = new ListNode(summedOver10);
                ptr = ptr->next;
                ptr->next = NULL;
            }
        }
        
        return ansHead;
    }
};