/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int arr[10002];
int sz;
int p;
void inorder(struct TreeNode *root){
    
    if(root == NULL){
        return;
    }
    inorder(root->left);
    arr[p++]=root->val;
    sz++;
    inorder(root->right);
    
}

 struct TreeNode* createNode(){
    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    node->left=NULL;
    node->right=NULL;
    return node;
}
 void hierarchy( int lo , int hi ,struct TreeNode* root )
{   if(lo>hi){
    return;
    }
    int mid = lo + (hi-lo)/2;
    // if(dir==0){
        root->val=arr[mid];
        if(lo==hi){
            return;
        }
        if(lo<mid){
        struct TreeNode *lft=createNode();
        root->left=lft;
        hierarchy(lo,mid-1,root->left);
    }
    if(hi>mid){
        struct TreeNode *rght=createNode();
        root->right=rght;
        hierarchy(mid+1,hi,rght);
    }
}
struct TreeNode* balanceBST(struct TreeNode* root2) {
    p=1;
    sz=0;
    inorder(root2);
    int lo = 1 , hi = sz;
    struct TreeNode* root=createNode();
    hierarchy(lo,hi,root);
    return root;
}