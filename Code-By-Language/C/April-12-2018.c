//******************************************
//* 83. Remove Duplicates from Sorted List *
//******************************************

//O(n) solution
Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if (head == NULL)
    {
        return head;
    }
    else if (head->next == NULL)
    {
        return head;
    }
    struct ListNode *ptr0 = head;
    struct ListNode *ptr1 = head->next;
    struct ListNode *temp = NULL;
    
    while (ptr1 != NULL)
    {
        if (ptr1->val == ptr0->val)
        {
            ptr1 = ptr1->next;
            temp = ptr0->next;
            ptr0->next = ptr1;
            free(temp);
            continue;
        }
        
        ptr0 = ptr1;
        ptr1 = ptr1->next;
    }
    
    return head;
}
