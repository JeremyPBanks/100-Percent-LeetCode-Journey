//************************
//*  2. Add Two Numbers  *
//************************


//O(max(n,m)) solution
struct ListNode 
{
    int val;
    struct ListNode *next;
};
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
    struct ListNode *ptr1 = l1;
    struct ListNode *ptr2 = l2;
    struct ListNode *ptrFin = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *finHead = ptrFin;
    
    ptrFin->next = NULL;
    int overTenSum = 0;
    int val = 0;
    
    while (ptr1 != NULL || ptr2 != NULL)
    {
        if (ptr1 == NULL)
        {
            val = ptr2->val + overTenSum;
            overTenSum = 0;
            if (val > 9)
            {
                overTenSum = 1;
                val -= 10;
            }
            ptr2 = ptr2->next;
        }
        else if (ptr2 == NULL)
        {
            val = ptr1->val + overTenSum;
            overTenSum = 0;
            if (val > 9)
            {
                overTenSum = 1;
                val -= 10;
            }
            ptr1 = ptr1->next;
        }
        else
        {
            val = ptr1->val + ptr2->val + overTenSum;
            overTenSum = 0;
            if (val > 9)
            {
                overTenSum = 1;
                val -= 10;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        ptrFin->val = val;
        if (ptr1 != NULL || ptr2 != NULL)
        {
            ptrFin->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            ptrFin = ptrFin->next;
            ptrFin->next = NULL;
        }
    }
    
    if (overTenSum)
    {
        ptrFin->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        ptrFin = ptrFin->next;
        ptrFin->next = NULL;
        ptrFin->val = 1;
    }
    
    return finHead;
}
