#include "BiNode.h"


//���캯��
HeroNode::HeroNode(int no, string name) {
	this->name = name;
	this->no = no;
}

//get����
int HeroNode::getNo() {
	return no;
}
string HeroNode::getName() {
	return name;
}

//set����
void HeroNode::setLeft(HeroNode* left) {
	this->left = left;
}

void HeroNode::setRight(HeroNode* right) {
	this->left = right;
}