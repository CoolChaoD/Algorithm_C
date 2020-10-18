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
	this->right = right;
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
	if (this->left != nullptr) {
		//cout << "����������" << endl;
		this->left->preOrder();
	}

	//�ݹ�������������
	if (this->right != nullptr) {
		this->right->preOrder();
	}
}

//2.�������
//˳�����ӽڵ�->���ڵ�->���ӽڵ�
void HeroNode::infixOrder() {
	//1.���ж��������Ƿ�Ϊ�գ�����Ϊ�գ����ȥ�ݹ����
	if (this->left != nullptr) {
		this->left->infixOrder();//�ݹ������������еݹ����
	}

	//2.������ڵ�
	printNode(this);//��ӡ��ǰָ��

	//3.����ж��������Ƿ�Ϊ�գ�����Ϊ�գ����ȥ���еݹ����
	if (this->right != nullptr) {
		this->right->infixOrder();
	}
}

//3.�������
void HeroNode::postOrder() {
	//1.���ж��������Ƿ�Ϊ�գ�����Ϊ�գ���ݹ��������
	if (this->left != nullptr) {
		this->left->postOrder();
	}
	//2.�ж��������Ƿ�Ϊ�գ�����Ϊ�գ���ݹ����ұ���
	if (this->right != nullptr) {
		this->right->postOrder();
	}

	//3.�����ǰ�ڵ�
	printNode(this);
}