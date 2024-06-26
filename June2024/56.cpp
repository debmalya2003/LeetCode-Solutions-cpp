//876. Middle of the Linked List

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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL || head==NULL){
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        int mid = count / 2 + 1;
        temp = head;
        while (temp != NULL) {
        mid = mid - 1;
        if (mid == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;
    }
};