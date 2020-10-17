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
	this->left = right;
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
	if (this->left != NULL) {
		cout << "left" << endl;
		this->left->preOrder();
	}
	//递归向右子树遍历
	if (this->right != NULL) {
		this->right->preOrder();
	}

}