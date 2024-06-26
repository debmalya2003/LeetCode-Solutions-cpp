//19. Remove Nth Node From End of List

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
        if(head==NULL){
            return NULL;
        }
        int cnt=0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        if (cnt == n) {//if numner of nodes=n, that means we need to delete first/head element
            ListNode* newhead = head->next;
            delete (head);
            return newhead;
        }
        int res=cnt-n;
        temp=head;//resets temp to head
        while (temp != NULL) {
            res--;
            if (res == 0) { //traverse to the node just before the one to delete
                break;
            }
            temp = temp->next;
        }
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;//skips required element
        delete (delNode);
        return head;
    }
};