#include "Tree.h"

using namespace std;

//���ø��ڵ�
void Tree::setRoot(Node* root) {
	this->root = root;
}



//������������
void Tree::threadBitree(Node* node) {
	if (node == nullptr) {
		return;
	}
	//1.������������
	threadBitree(node->getLeft());
	//2.�������м�ڵ�
	//ǰ���ڵ�
	if (node->getLeft() == nullptr) {
		node->setLeft(pre);
		node->setLeftTag(1);
	}
	//�����̽ڵ㣬��̽ڵ�Ӧ��Ҫ����һ�νڵ�������
	if (pre != nullptr && pre->getRight() == nullptr) {
		pre->setRight(node);
		pre->setRightTag(1);
	}
	//����ǰ�ڵ㱣������
	pre = node;
	//3.������������
	threadBitree(root->getRight());
}