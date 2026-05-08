# Last updated: 08/05/2026, 09:27:48
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def pairSum(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: int
        """

        slow= head
        dummi= None
        frw= head
        fast= head
        while fast:

            if fast:
                fast= fast.next.next


            frw = slow.next
            slow.next= dummi
            dummi = slow
            slow= frw

        # print(dummi)
        # print(slow)
        summ=0
        while dummi:
            if (dummi.val+slow.val) > summ:
                summ = dummi.val+slow.val

            dummi= dummi.next
            slow= slow.next

        return summ








        # # Step 1: Find the middle of the linked list
        # slow = fast = head
        # prev = None
        # while fast:
        #     if fast:
        #         fast = fast.next.next
            
        #     # Reverse the first half of the list while finding the middle
        #     next_node = slow.next
        #     slow.next = prev
        #     prev = slow
        #     slow = next_node
        
        # # Step 2: Compare elements from the middle to the end and from the reversed first half
        # max_sum = 0
        # while slow:
        #     if max_sum < prev.val + slow.val:
        #         max_sum = prev.val + slow.val
            
        #     # Move to next nodes in the first and second halves
        #     prev = prev.next
        #     slow = slow.next
        
        # return max_sum