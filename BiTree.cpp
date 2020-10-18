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

//�����㷨
//1.��ʼǰ�����
HeroNode* BiTree::preOrderSearch(int no) {
	cout << "��ʼ1ǰ�����" << endl;
	if (this->root != nullptr) {
		return this->root->preOrderSearch(no);
	}
	else {
		return nullptr;
	}
}

//2.�������
HeroNode* BiTree::infixOrderSearch(int no) {
	cout << "��ʼ�������" << endl;
	if (this->root != nullptr) {
		return this->root->infixOrderSearch(no);
	}
	else {
		return nullptr;
	}
}

//3.�������
HeroNode* BiTree::postOrderSearch(int no) {
	cout << "��ʼ�������" << endl;
	if (this->root != nullptr) {
		return this->root->postOrderSearch(no);
	}
	else {
		return nullptr;
	}
}