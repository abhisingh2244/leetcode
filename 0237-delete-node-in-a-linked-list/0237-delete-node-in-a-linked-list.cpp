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
    void deleteNode(ListNode* node) {
      ListNode* p=node;
        while(p->next!=NULL){
            p->val=(p->next)->val;
            node=p;
            p=p->next;

        }
        node->next=NULL;   
    }
};