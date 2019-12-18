#include <iostream>
#include <queue>
using namespace std;

int run(TreeNode *root) {
	if(!root)
		return 0;
	queue<TreeNode*> que;
	que.push(root);
	int depth = 0;
	while(!que.empty()) {
		int size = que.size();
		++depth;
		for (int i = 0; i < size; ++i)
		{
			TreeNode* tmp = que.front();
			if(tmp->left)
				que.push(tmp->left);
			if(tmp->right)
				que.push(tmp->right);
			que.pop();
			if(!tmp->left && !tmp->right)
				return depth;
		}
	}
	return -1;
}