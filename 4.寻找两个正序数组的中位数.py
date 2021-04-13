#
# @lc app=leetcode.cn id=4 lang=python3
#
# [4] 寻找两个正序数组的中位数
#

# @lc code=start
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        point1 = 0
        point2 = 0
        length = len(nums1) + len(nums2)
        point3 = 0
        older_num = 0
        num = 0
        while True:
            if length // 2 + 1 == point3:
                if length % 2 ==0 :
                    return (num + older_num) / 2
                else:
                    return num
            point3 += 1
            if point1 < len(nums1) and ( point2 >= len(nums2) or nums1[point1] < nums2[point2]):
                older_num = num
                num = nums1[point1]
                point1 += 1
            else:              
                older_num = num
                num = nums2[point2]
                point2 += 1
# @lc code=end
 