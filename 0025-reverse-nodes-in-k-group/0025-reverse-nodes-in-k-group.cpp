class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k<=1)
        return head;
        ListNode *t=head;
        ListNode *p=head->next;
        ListNode *x=head;
        ListNode *tmp=head;
        ListNode *dmy=new ListNode;
        int n,c=0,f=0;
        while(t){
                t=t->next;
                c++;
            }
        t=head;
        n=c/k;
// pointing pointer x to the node where the previous node to be added.
        for(int i=0;i<n;i++){
            int j=0;
            while(j<k){ 
                if(x->next==NULL){
                    dmy->val=x->val;
                        x->next=dmy;
                        x=x->next;
                        f=1;
                        break;
                    }
                     x=x->next;
                    j++;
                }
//adding the nodes
                int l=0;
                while(l<k){
                    t->next=x;
                    x=t;
                    t=p;
                    p=p->next;
                l++;
                }
                if(i==0){              //maintaining head position, only in 
                head=x;                // first iteration.
                tmp=x;
                }
                else{                 // linking the previous nodes.
                    int y=0; 
                    while(y<(k-1)){
                        tmp=tmp->next;
                        y++;
                        }
                    tmp->next=x;
                    tmp=x;
                }
                x=t;
        }

        while(tmp){
            if(tmp->next==NULL)
                return head;
                
            else if(tmp->next==dmy){
                tmp->next=NULL;
                return head;
                }
            tmp=tmp->next;
            
        }
    return head;
    }
};