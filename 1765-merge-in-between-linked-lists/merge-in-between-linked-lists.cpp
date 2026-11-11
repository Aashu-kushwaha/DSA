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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* aa=list1;
        ListNode* bb=list1->next;
        b=b-a+1;
        a--;
        while(a--){
            aa=aa->next;
            bb=bb->next;
        }
        while(b--){
            if(bb==NULL){
                aa->next=list2;
                return list1;
            }
            aa->next=bb->next;
            delete bb;
            bb=aa->next;
        }
        aa->next=list2;
        while(aa->next!=NULL){
            aa=aa->next;
        }
        aa->next=bb;
        return list1;
    }
};