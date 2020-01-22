//Runtime: 12 ms, faster than 22.65% of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage: 9.7 MB, less than 5.74% of C++ online submissions for Merge Two Sorted Lists.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode * insert(ListNode *root,int val)
    {
        if(root==NULL)
        {
            root = new ListNode(val);
        }
        else
        {
            ListNode *tmp = root;
            while(tmp->next!=NULL)
            {
                tmp = tmp->next;
            }
            ListNode *new_node = new ListNode(val);
            tmp->next = new_node;
        }
        return root;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *pos1 = l1, *pos2 = l2;
        while(1)
        {
            if(pos1!=NULL && pos2!=NULL)
            {
                if(pos1->val <= pos2->val)
                {
                    head = insert(head,pos1->val);
                    pos1 = pos1->next;
                }
                else if(pos1->val > pos2->val)
                {
                    head = insert(head,pos2->val);
                    pos2 = pos2->next;
                }
            }
            else if(pos2==NULL && pos1!=NULL)
            {
                head = insert(head,pos1->val);
                pos1 = pos1->next;
            }
            else if(pos1==NULL && pos2!=NULL)
            {
                head = insert(head,pos2->val);
                pos2 = pos2->next;
            }
            else
                break;
        }
        return head;
        
    }
};
