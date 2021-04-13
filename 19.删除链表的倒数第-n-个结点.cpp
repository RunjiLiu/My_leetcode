/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode *points[30];
            int length = 0;
            ListNode *point = head;
            while(point){
                points[length] = point;
                length += 1;
                point = point->next;
            }
            if ((length - n)==0){
                return head->next;
            }
            point = points[length-n-1];
            point->next = point->next->next;
            // while (point)
            // {
            //     if(c == length){
            //         point->next = point->next->next;
            //     }
            //     point = point->next;
            //     c += 1;
            // }
            return head;
    }
};
// @lc code=end

