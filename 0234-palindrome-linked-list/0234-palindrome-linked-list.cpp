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
    ListNode* middle(ListNode* head)
    {
    ListNode *fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
        slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    
    }
    ListNode *reverse(ListNode* temp)
    {
    ListNode* curr=temp;
        ListNode * prev=NULL;
        while(curr!=NULL)
        {
        ListNode* forward=curr->next;
        curr->next=prev;
            prev=curr;
        curr=forward;}
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)return true;
        ListNode* mid=middle( head);
        mid=mid->next;
        ListNode* rev=reverse(mid);
        
        ListNode *dummy=head;
        while(rev!=NULL and dummy!=mid)
        {
        if(rev->val!=dummy->val)return false;
            rev=rev->next;
            dummy=dummy->next;
        }return true;
    }
};