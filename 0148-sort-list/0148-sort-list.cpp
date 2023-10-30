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
    ListNode* sortList(ListNode* head) {
        vector<int> res;

        ListNode* l1 = head;
        while(l1 != NULL){
            res.push_back(l1->val);
            l1 = l1->next;
        }
        l1 = head;

        
        sort(res.begin(),res.end());
        for(auto i : res){
            l1->val = i;
            l1 = l1->next;
        }
        return head;

        
        
        
        
    }
};