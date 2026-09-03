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
    bool isPalindrome(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;
        while(curr!=NULL){
            st.push(curr);
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL){
            if(head->val==st.top()->val){
                st.pop();
            }
            else{
                return false;
            }
            head=head->next;
            if(curr->next!=NULL){
                curr=curr->next->next;
            }
            else
            {curr=curr->next;}
        }
        
        return true;
        
        
    }
};