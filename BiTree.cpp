#include "BiTree.h"

void BiTree::setRoot(HeroNode* root) {
	this->root = root;
}

void BiTree::preOrder() {
	if (this->root != NULL) {
		this->root->preOrder();
	}
	else {
		cout << "二叉树为空，无法遍历" << endl;
	}
}