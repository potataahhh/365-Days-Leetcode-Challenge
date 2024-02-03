// create a data structure to store the result
// write the base condition
// create a queue for traversing and inserting element in DS
// push the root into queue
// check if the queue is empty
//  create a vector to store the elements in order
// find the size of queue
// take the first element and pop it from queue and insert it in the DS

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;

        if(root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> level;
            int size = q.size();

            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();

                if(node->left != NULL)
                q.push(node->left);

                if(node->right!=NULL)
                q.push(node->right);

                level.push_back(node->val);
            }
            res.push_back(level);
        }
        return res;
    }
};
