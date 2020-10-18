#include "BiTree.h"
#include "BiNode.h"
void BiTree::setRoot(HeroNode* root) {
	this->root = root;
}

void BiTree::preOrder1() {

	if (this->root != NULL) {
		this->root->preOrder();
	}
	else {
		cout << "二叉树为空，无法遍历" << endl;
	}
}