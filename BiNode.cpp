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