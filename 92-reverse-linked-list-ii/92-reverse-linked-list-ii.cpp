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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* temp1=head;
        vector<int>v;
        int count=0;
        
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
            count++;
        }
        reverse(v.begin()+left-1,v.end()-count+right);
        int i=0;
        while(temp1)
        {
        temp1->val=v[i];
        i++;
        temp1=temp1->next;
        }
        return head;
    }
};