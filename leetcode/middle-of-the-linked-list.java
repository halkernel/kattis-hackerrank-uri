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
    public ListNode middleNode(ListNode head) {
        int count = 0;
        ArrayList<ListNode> arr = new ArrayList<>();
        while(head != null){
            arr.add(head);
            head = head.next;
            count++;
        }
        return arr.get(count/2);
    }
}
