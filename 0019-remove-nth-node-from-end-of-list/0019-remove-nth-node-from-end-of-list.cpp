class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next){
            return head->next;
        }
        ListNode* prevHold = NULL;
        ListNode* prev = head;
        ListNode* fwd = head;
        --n;
        while(n--){
            fwd = fwd->next;
        }
        if(!fwd->next){
            return head->next;
        }
        while(fwd->next){
            prevHold = prev;
            prev = prev->next;
            fwd = fwd->next;
        }
        prevHold->next = prev->next;
        delete prev;
        return head;
    }
};