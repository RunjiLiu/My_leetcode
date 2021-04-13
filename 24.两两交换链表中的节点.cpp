/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        ListNode *point = head;
        ListNode *pre = nullptr;
        ListNode *tmp=nullptr;
        while(point->next){
            tmp = point;
            point->next->val = tmp->val;
            point->val = tmp->next->val;

            point->next = tmp;
            point->next->next = tmp->next->next;                        point = point->next->next;
        }
        return head;
    }
};
// @lc code=end

