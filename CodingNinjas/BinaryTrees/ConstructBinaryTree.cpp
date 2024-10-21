class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& nums) {
        int n = nums.size();
        unordered_map<TreeNode*, TreeNode*> parChild;
        unordered_map<int, TreeNode*> mp;

        for (auto it : nums) {
            int parent = it[0];
            int child = it[1];
            bool isLeft = it[2];

            if (mp.find(parent) != mp.end()) {
                TreeNode* parentNode = mp[parent];
                TreeNode* childNode;

                if (mp.find(child) != mp.end()) childNode = mp[child];
                else childNode = new TreeNode(child);

                if (isLeft) parentNode->left = childNode;
                else parentNode->right = childNode;

                parChild[childNode] = parentNode;
                mp[child] = childNode;
            }

            else {
                TreeNode* parentNode = new TreeNode(parent);
                TreeNode* childNode;
                if (mp.find(child) != mp.end()) childNode = mp[child];
                else childNode = new TreeNode(child);

                if (isLeft) parentNode->left = childNode;
                else parentNode->right = childNode;

                parChild[childNode] = parentNode;
                parChild[parentNode] = parentNode;
                mp[child] = childNode;
                mp[parent] = parentNode;
            }
        }

        for (auto it : parChild) {
            if (it.first->val == it.second->val) return it.first;
        }

        return NULL;
    }
};