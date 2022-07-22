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
    ListNode* partition(ListNode* head, int x) {
       ListNode* temp=head;
        vector<int> left;  //left part
        vector<int> right;   //right part
        
         while(temp!=NULL) {
           (temp->val<x) ? left.push_back(temp->val) : right.push_back(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        int i=0;
        while(i<left.size()) {
            temp->val=left[i++];
            temp=temp->next;
        }
        
        i=0;
        while(i<right.size()) {
            temp->val=right[i++];
            temp=temp->next;
        }
        
        return head;
         
    }
};