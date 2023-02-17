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
    ListNode*temp = head;
    int length = 1;
    while(temp->next != NULL) {
        ++length;
        temp = temp->next;
    }
    temp->next = head;
    k = k%n; //when k is more than length of list
    int end = n-k; //to get end of the list
    while(end--) temp = temp->next;
    //breaking last node link and pointing to NULL
    head = temp->next;
    temp->next = NULL;
        
   
        return head;
    }
};