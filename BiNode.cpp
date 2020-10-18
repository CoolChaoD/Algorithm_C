#include "BiNode.h"


//构造函数
HeroNode::HeroNode(int no, string name) {
	this->name = name;
	this->no = no;
}

//get方法
int HeroNode::getNo() {
	return no;
}
string HeroNode::getName() {
	return name;
}

//set方法
void HeroNode::setLeft(HeroNode* left) {
	this->left = left;
}

void HeroNode::setRight(HeroNode* right) {
	this->right = right;
}

//打印节点
void HeroNode::printNode(HeroNode* node) {
	cout << "no:" << node->getNo() << "  name:" << node->getName() << endl;
}

//1.前序遍历
//顺序：父节点->左子节点->右子节点
void HeroNode::preOrder() {
	//首先输出父节点
	printNode(this);
	//递归向左子树遍历
	if (this->left != nullptr) {
		//cout << "进入左子树" << endl;
		this->left->preOrder();
	}

	//递归向右子树遍历
	if (this->right != nullptr) {
		this->right->preOrder();
	}
}

//2.中序遍历
//顺序：左子节点->父节点->右子节点
void HeroNode::infixOrder() {
	//1.先判断左子树是否为空，若不为空，则进去递归遍历
	if (this->left != nullptr) {
		this->left->infixOrder();//递归向左子树进行递归遍历
	}

	//2.输出父节点
	printNode(this);//打印当前指针

	//3.最后判断右子树是否为空，若不为空，则进去进行递归遍历
	if (this->right != nullptr) {
		this->right->infixOrder();
	}
}

//3.后序遍历
void HeroNode::postOrder() {
	//1.先判断左子树是否为空，若不为空，则递归向左遍历
	if (this->left != nullptr) {
		this->left->postOrder();
	}
	//2.判断右子树是否为空，若不为空，则递归向右遍历
	if (this->right != nullptr) {
		this->right->postOrder();
	}

	//3.输出当前节点
	printNode(this);
}