#include "BiTree.h"


int main() {


	//首先创建一颗二叉树
	BiTree* bitree = new BiTree();



	//创建需要的节点
	HeroNode* root = new HeroNode(1, "SongJiang");
	HeroNode* node2 = new HeroNode(2, "WuYong");
	HeroNode* node3 = new HeroNode(3, "LuJunYi");
	HeroNode* node4 = new HeroNode(4, "LinChong");
	HeroNode* node5 = new HeroNode(5, "GuanSheng");



	//手动创建一颗二叉树
	root->setLeft(node2);
	root->setRight(node3);
	node3->setRight(node4);
	node3->setLeft(node5);
	bitree->setRoot(root);
	//测试代码

	//cout << "前序遍历" << endl;
	//bitree->preOrder1();
	//cout << "中序遍历" << endl;
	//bitree->infixOrder1();
	//cout << "后序遍历" << endl;
	//bitree->postOrder1();

	HeroNode* resNode;
	resNode = bitree->postOrderSearch(3);
	cout << "no:" << resNode->getNo() << "name:" << resNode->getName() << endl;
	//前序查找3次，中序查找4次，后序查找4次


	return 1;
}

