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
   int length(ListNode* head)
    {
        int count=1;
    while(head->next!=NULL) 
    {
    count++;
    head=head->next;
    }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
     if(head==NULL || head->next==NULL or k==0)return head;
        int n=length(head);
        k=k%n;
        for(int i=0;i<k;i++){
        ListNode* temp=head;
        while(temp->next->next!=NULL )temp=temp->next;
        ListNode* end=temp->next;
        temp->next=NULL;
        end->next=head;
        head=end;
    }
        return head;
    }
};