//2095. Delete the Middle Node of a Linked List

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
    ListNode* deleteMiddle(ListNode* head) {
       if(head->next==NULL){
           return NULL;
       }

       int count=0;
       ListNode *temp = head;
       while(temp->next!=NULL){
           temp=temp->next;
           count++;
       }

       int i=0;
       ListNode *prev = NULL;
       ListNode *curr = head;

       while(i<((count+1)/2)){//till we reach middle element
           prev = curr;
           curr = curr->next;
           i++;
       }

       prev->next = curr->next;//skips middle element

       curr->next=NULL;
       delete curr;

       return head;

    }
};