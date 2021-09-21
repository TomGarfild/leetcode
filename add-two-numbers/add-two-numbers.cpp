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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0;
        ListNode* root = nullptr;
        ListNode* prev = nullptr;
        do {
            int value = add;
            if (l1 != nullptr) {
                value += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                value += l2->val;
                l2 = l2->next;
            }
            add = value/10;
            ListNode* curr = new ListNode(value%10);
            if (prev == nullptr) {
                prev = curr;
            }
            else {
                prev->next = curr;
                prev = curr;
            }
            if (root == nullptr) {
                root = curr; 
            }
            else if (root->next == nullptr) {
                root->next = prev;
            }
        }
        while (l1 != nullptr || l2 != nullptr || add);
        return root;
    }
};