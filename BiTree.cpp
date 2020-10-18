#include "BiTree.h"
#include "BiNode.h"
void BiTree::setRoot(HeroNode* root) {
	this->root = root;
}


//遍历算法
//1.前序遍历
void BiTree::preOrder1() {

	if (this->root != NULL) {
		this->root->preOrder();
	}
	else {
		cout << "二叉树为空，无法遍历" << endl;
	}
}

//2.中序遍历
void BiTree::infixOrder1() {

	if (this->root != NULL) {
		this->root->infixOrder();
	}
	else {
		cout << "二叉树为空，无法遍历" << endl;
	}

}

//3.后序遍历
void BiTree::postOrder1() {

	if (this->root != NULL) {
		this->root->postOrder();
	}
	else {
		cout << "二叉树为空，无法遍历" << endl;
	}
}
