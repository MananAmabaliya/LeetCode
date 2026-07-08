/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *save=head;
    struct ListNode *p1=NULL;
    struct ListNode *p2=NULL;
    
    while(save!=NULL){
        p2=save->next;
        save->next=p1;
        p1=save;
        save=p2;
    }
    return p1;
}