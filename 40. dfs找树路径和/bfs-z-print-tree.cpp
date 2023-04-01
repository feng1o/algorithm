#include<iostream>
#include<string>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root == NULL) return v;

        queue<TreeNode*> q;
        q.push(root);
        bool rotate = false;
        while(!q.empty()) {
            int size = q.size();
            cout << "rotat: " << rotate <<  "  size:" << size << endl;
            vector<int> sv;
            while(size--) {
                TreeNode *n = q.front();
                q.pop();
                sv.push_back(n->val);
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            if (rotate) {
                for (auto x : sv) {
                    cout << x << "   -  ";
                }
                reverse(sv.begin(), sv.end());
                for (auto x : sv) {
                    cout << x << "   =  ";
                }
                cout << endl;
            }
            v.push_back(sv);
            cout << "roate: src : " << rotate << endl;
            rotate = !rotate;
            cout << "c roate: src : " << rotate << endl;
        }
        return v;
    }
};


int main() {
    cout << "----" << endl;
    TreeNode *tree = new TreeNode(3);
    tree->left = new TreeNode(9);
    tree->right = new TreeNode(20);
    tree->right->left = new TreeNode(15);
    tree->right->right = new TreeNode(7);

    Solution s;
    vector<vector<int>>  res = s.levelOrder(tree);
    for (auto &s : res) {
        for (auto &i : s) {
            cout << i << " ";
        }
        cout << endl;
    }

    bool x = false;
    cout << x << endl;
    cout << ~x << endl;
    x = ~x;
    cout << x << endl;
    x = ~x;
    cout << x << endl;
    return 0;
}