//141. Linked List Cycle

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
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        std::unordered_map<ListNode*, int> nodeMap;
        while(temp!=NULL){
            if(nodeMap.find(temp)!=nodeMap.end()){
                return true;
            }
            nodeMap[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};