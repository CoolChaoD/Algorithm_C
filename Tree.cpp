#include "Tree.h"

using namespace std;

//设置根节点
void Tree::setRoot(Node* root) {
	this->root = root;
}



//线索化二叉树
void Tree::threadBitree(Node* node) {
	if (node == nullptr) {
		return;
	}
	//1.线索化左子树
	threadBitree(node->getLeft());
	//2.线索化中间节点
	//前驱节点
	if (node->getLeft() == nullptr) {
		node->setLeft(pre);
		node->setLeftTag(1);
	}
	//处理后继节点，后继节点应该要用下一次节点来处理
	if (pre != nullptr && pre->getRight() == nullptr) {
		pre->setRight(node);
		pre->setRightTag(1);
	}
	//将当前节点保存下来
	pre = node;
	//3.线索化右子树
	threadBitree(root->getRight());
}