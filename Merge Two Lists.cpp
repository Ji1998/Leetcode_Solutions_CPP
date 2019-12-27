//比较两个list中node的数值大小，然后插入新的list里边



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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        while (l1 && l2){                                           //考虑到l1和l2的长度可能不一样，如果其中一个更长
            if(l1->val < l2->val){                                  //则会有NULL，因此不能true，跳出while loop
                cur->next = new ListNode (l1->val);                 //把其剩余部分直接放入新list的尾部
                l1 = l1->next;
            }
            else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
            
            
        }
            cur ->next = l1? l1:l2;                             //while loop走完之后，把多出来的部分接入新list尾部
            return dummy->next;                                 //如果只return dummy，-1也会出现在新list，因此return dummy->next
        
            
        }
    
};
