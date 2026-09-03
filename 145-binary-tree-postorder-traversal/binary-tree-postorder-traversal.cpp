/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack< TreeNode* > st;
        if(root==NULL){
            return {};
        }
        st.push(root);
        vector<int> ans;
        while(!st.empty()){
            TreeNode* tp = st.top();
            ans.push_back(tp->val);
            st.pop();
            if(tp->left!=NULL)
            {st.push(tp->left);}
            if(tp->right!=NULL)
            {st.push(tp->right);}
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};