/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head; ListNode *point;ListNode *origin_head;
        head = new ListNode(-1);
        origin_head = head;
        head->next = nullptr;
        while( l1 && l2 ){
            if (l1->val < l2->val) // 把l1插入主链表
            {
                head->next = l1;
                l1 = l1->next;                
            }
            else // 把l2插入主链表
            {                          
                head->next = l2;
                l2 = l2->next;                                 
            }                       
            head = head->next;
        }
        if(l1){
            head->next = l1;
        }
        if(l2){
            head->next = l2;
        }
        return origin_head->next;
    }
};
// @lc code=end

