/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0, extra=0;
        ListNode *node;
        ListNode *head=nullptr;
        ListNode *pre_node=head;
        while(l1 || l2){
            sum = extra;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2-> val;
                l2 = l2->next;
            }
            if (sum > 9){
                extra = 1;
                sum -= 10;
            }
            else{
                extra = 0;
            }
            node = new ListNode(sum);
            if (pre_node!=nullptr){
                pre_node->next = node;
            }
            else{
                head = node;
            }
            pre_node = node;
        }
        if(extra!=0){
            node = new ListNode(1);
            pre_node->next = node;
        }
        return head;
    }
};
// @lc code=end

