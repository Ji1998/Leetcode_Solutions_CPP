
  /*struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 */

//把两个link list的数值相加，然后把相加的值放入dummy node后边


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;                   //建立一个pointer叫dummy，指向heap里初始值为-1的ListnNode
        int carry = 0;                                                      //建立一个pointer叫cur，用来给dummy后的node进行traversal 
        while (l1 || l2) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            int sum = val1 + val2 + carry;
            carry = sum / 10;                                       //计算是否需要carry
            cur->next = new ListNode(sum % 10);                     //余数则为进位后的个位数
            cur = cur->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry) cur->next = new ListNode(1);
        return dummy->next;
    }
};
