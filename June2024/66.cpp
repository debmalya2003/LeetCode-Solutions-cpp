//160. Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        map<ListNode* ,int>m;
        while(a!=NULL){
            m[a]++;
            a=a->next;
        }
        while(b!=NULL){
            if(m[b])return b;
            b=b->next;
        }
        return NULL;
    }
};