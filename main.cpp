#include "BiTree.h"

int main() {

	//���ȴ���һ�Ŷ�����
	BiTree* bitree = new BiTree();
	//������Ҫ�Ľڵ�
	HeroNode* root = new HeroNode(1, "songjiang");
	HeroNode* node2 = new HeroNode(2, "wuyong");
	HeroNode* node3 = new HeroNode(3, "lujunyi");
	HeroNode* node4 = new HeroNode(4, "linchong");
	HeroNode* node5 = new HeroNode(5, "guansheng");

	//�ֶ�����һ�Ŷ�����
	root->setLeft(node2);
	root->setRight(node3);
	node3->setRight(node4);
	node3->setLeft(node5);
	bitree->setRoot(root);
	cout << "ǰ�����" << endl;
	bitree->preOrder1();




	return 1;
}

