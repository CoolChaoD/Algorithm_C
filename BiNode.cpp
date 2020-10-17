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
//��ӡ�ڵ�
void HeroNode::printNode(HeroNode* node) {
	cout << "no:" << node->getNo() << "  name:" << node->getName() << endl;
}

//1.ǰ�����
//˳�򣺸��ڵ�->���ӽڵ�->���ӽڵ�
void HeroNode::preOrder() {
	//����������ڵ�
	printNode(this);
	//�ݹ�������������
	if (this->left != NULL) {
		cout << "left" << endl;
		this->left->preOrder();
	}
	//�ݹ�������������
	if (this->right != NULL) {
		this->right->preOrder();
	}

}