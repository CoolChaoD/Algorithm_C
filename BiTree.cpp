#include "BiTree.h"
#include "BiNode.h"
void BiTree::setRoot(HeroNode* root) {
	this->root = root;
}


//�����㷨
//1.ǰ�����
void BiTree::preOrder1() {

	if (this->root != NULL) {
		this->root->preOrder();
	}
	else {
		cout << "������Ϊ�գ��޷�����" << endl;
	}
}

//2.�������
void BiTree::infixOrder1() {

	if (this->root != NULL) {
		this->root->infixOrder();
	}
	else {
		cout << "������Ϊ�գ��޷�����" << endl;
	}

}

//3.�������
void BiTree::postOrder1() {

	if (this->root != NULL) {
		this->root->postOrder();
	}
	else {
		cout << "������Ϊ�գ��޷�����" << endl;
	}
}
