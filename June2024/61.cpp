//328. Odd Even Linked List

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
    ListNode* oddEvenList(ListNode* head){
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* odd = head;
        ListNode* even =head->next;
        ListNode* evenhead=even;

        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;//if last element is missed
            even=even->next;//if last element is missed
        }
        odd->next=evenhead;//pointing last odd element to first even element
        return head;
    }
};