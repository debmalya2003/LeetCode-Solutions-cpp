//148. Sort List

class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b) {
        // merging two linked list with their head
        ListNode*c=new ListNode(-1);
        ListNode*temp=c;
        while(a!=NULL && b!=NULL) {
            if(a->val <= b->val) {
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL) temp->next=b;
        else temp->next=a;
        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        // base case
        if(head==NULL || head->next==NULL) return head;
        // find the left middle of the linked list
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){ // 1st -> Odd , 2nd -> even
            slow=slow->next;
            fast=fast->next->next;
        }
        // slow is at left middle now devide the linked list in two part
        ListNode*a=head;
        ListNode*b=slow->next;
        slow->next=NULL;
        a=sortList(a); // recursion
        b=sortList(b); // recursion
        ListNode*c=merge(a,b);
        return c;
    }
};