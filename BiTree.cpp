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

//查找算法
//1.开始前序查找
HeroNode* BiTree::preOrderSearch(int no) {
	cout << "开始1前序查找" << endl;
	if (this->root != nullptr) {
		return this->root->preOrderSearch(no);
	}
	else {
		return nullptr;
	}
}

//2.中序查找
HeroNode* BiTree::infixOrderSearch(int no) {
	cout << "开始中序查找" << endl;
	if (this->root != nullptr) {
		return this->root->infixOrderSearch(no);
	}
	else {
		return nullptr;
	}
}

//3.后序查找
HeroNode* BiTree::postOrderSearch(int no) {
	cout << "开始后序查找" << endl;
	if (this->root != nullptr) {
		return this->root->postOrderSearch(no);
	}
	else {
		return nullptr;
	}
}