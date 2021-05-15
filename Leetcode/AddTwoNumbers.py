"""
Problem: Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 
Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.
"""
"""
Approach 1: Convert the linked lists to integers, perform the addition, and convert the sum to a linked list and return it.

# Definition for singly-linked list.
"""
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def convert_int(list):
        var=''
        while (list):
            var+=str(list.val)
            list=list.next
        return int(var[::-1])
    
    def convert_list(n):
        temp= str(n)[::-1]
        head= prev=None
        for i in temp:
            node=ListNode(int(i))
            if prev is not None:
                prev.next=node
            prev=node
            if head is None:
                head=prev
        return head
        
    
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        a = Solution.convert_int(l1)
        b = Solution.convert_int(l2)
        return Solution.convert_list(a + b)
        
        
        