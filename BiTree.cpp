#include "BiTree.h"

void BiTree::setRoot(HeroNode* root) {
	this->root = root;
}

void BiTree::preOrder() {
	if (this->root != NULL) {
		this->root->preOrder();
	}
	else {
		cout << "������Ϊ�գ��޷�����" << endl;
	}
}