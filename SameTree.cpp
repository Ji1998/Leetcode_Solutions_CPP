//利用recursion遍历两个tree的全部node
//每次遍历有三种情况，p空q空，p不空q空，p空q不空，p,q都不空
//recursion：在ram的stack里建立frame，所有的method都要在frame里运行，在main还没走完时遇到recursion，便
//再建立一个新的frame给recursion的method，之后没走完再遇到recursion，便再建立一个frame给recursion的method
//以此类推。。。

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
            if (p == NULL && q == NULL){
                return true;
                
            }
            else if( p!= NULL && q == NULL){
                return false;
            }
            else if ( p == NULL &&  q!= NULL){
                return false;
            }
            else{
                if (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right))
                    return true;
                else 
                    return false;   
               
        }      
     }
    
};
