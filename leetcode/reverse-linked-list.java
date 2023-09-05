/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode current = head;
        ListNode prev = null;

        while(current != null){
            ListNode next = current.next; // next ->3->4->5
            current.next = prev; //current -> 2->1->null;
            prev = current; // prev -> 2->1->null;
            current = next; // current -> 3,4,5;
        }

        return prev;

    }
}




//1
//2
//3
//4
//5
