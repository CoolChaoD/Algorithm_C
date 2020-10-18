#include "BiTree.h"

int main() {

	//首先创建一颗二叉树
	BiTree* bitree = new BiTree();
	//创建需要的节点
	HeroNode* root = new HeroNode(1, "songjiang");
	HeroNode* node2 = new HeroNode(2, "wuyong");
	HeroNode* node3 = new HeroNode(3, "lujunyi");
	HeroNode* node4 = new HeroNode(4, "linchong");
	HeroNode* node5 = new HeroNode(5, "guansheng");

	//手动创建一颗二叉树
	root->setLeft(node2);
	root->setRight(node3);
	node3->setRight(node4);
	node3->setLeft(node5);
	bitree->setRoot(root);
	cout << "前序遍历" << endl;
	bitree->preOrder1();




	return 1;
}

