/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */ 
int* arr;
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
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    arr=malloc((numsSize+1)*sizeof(int));
    for(int i = 0 ;i<numsSize;i++){
        arr[i+1]=nums[i];
    }
    int lo = 1 , hi = numsSize;

    int mid = lo + (hi-lo)/2;
    struct TreeNode* root=createNode();
    hierarchy(lo,hi,root);
    

    return root;
    

    

}