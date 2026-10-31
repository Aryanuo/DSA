 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        ListNode dummy(0);
        dummy.next = head;      
        ListNode* f=head;
        ListNode* s = &dummy;
        while(f != NULL){
            if(n>0){
                f = f->next;
                n--;
            }else {
                f = f->next;
                s = s->next;
            }
        }
        s->next = s->next->next;
        return dummy.next;
    }
};