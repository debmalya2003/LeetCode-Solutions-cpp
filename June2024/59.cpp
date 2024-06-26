//142. Linked List Cycle II

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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head, *loop = nullptr;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {loop = fast; break;}
        }
        if (!loop) return nullptr;
        ListNode *iter = head;
        while (iter) {
            if (iter == loop) return iter;
            loop = loop->next;
            while (loop != fast) {
                if (iter == loop) return iter;
                loop = loop->next;
            }
            iter = iter->next;
        }
        return nullptr;
    }
};
