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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tmp1 = l1;
        ListNode *tmp2 = l2;
        ListNode *root = NULL, *tail = NULL;
        int carry = 0,ans;
        while(1)
        {
            ans = 0;
            if(tmp1!=NULL)
            {
                ans += tmp1->val;
                tmp1 = tmp1->next;
            }
            if(tmp2!=NULL)
            {
                ans += tmp2->val;
                tmp2 = tmp2->next;
            }
            ans = ans+carry;
            carry = 0;
            if(ans>9)
            {
                ans = ans%10;
                carry = 1;
            }
            if(root == NULL)
            {
                ListNode *tmp = new ListNode(ans);
                root = tail = tmp;
            }
            else
            {
                ListNode *tmp = new ListNode(ans);
                tail->next = tmp;
                tail = tmp;
            }
            if(tmp1==NULL && tmp2==NULL)
                break;
        }
        if(carry==1)
        {
            ListNode *tmp = new ListNode(1);
            tail->next = tmp;
            tail = tmp;
        }
        return root;
    }
};
