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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int top = 0, left = 0;
        int right = n - 1;
        int bott = m - 1;
        ListNode* curr = head;
        while (curr != nullptr && top <= bott && left <= right) {
            for (int i = left; i <= right; ++i) {
                if (curr == nullptr) break;
                ans[top][i] = curr->val;
                curr = curr->next;
            }
            top++;
            for (int i = top; i <= bott; ++i) {
                if (curr == nullptr) break;
                ans[i][right] = curr->val;
                curr = curr->next;
            }
            right--;

            for (int i = right; i >= left; --i) {
                if (curr == nullptr) break;
                ans[bott][i] = curr->val;
                curr = curr->next;
            }
            bott--;

            for (int i = bott; i >= top; --i) {
                if (curr == nullptr) break;
                ans[i][left] = curr->val;
                curr = curr->next;
            }
            left++;
        }
        return ans;    
    }
};

