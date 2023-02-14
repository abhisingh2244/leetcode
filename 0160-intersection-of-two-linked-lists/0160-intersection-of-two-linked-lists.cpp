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
    ListNode *getIntersectionNode(ListNode *h2, ListNode *h1) {
        unordered_set<ListNode*>mp;
        while(h2!=NULL)
        {
        mp.insert(h2); 
            h2=h2->next;
            
        }
        while(h1!=NULL)
        {
        if(mp.find(h1)!=mp.end())return h1;
            h1=h1->next;
            }
        return NULL;
    }
};