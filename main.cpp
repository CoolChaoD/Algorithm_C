#include "BiTree.h"


int main() {


	//���ȴ���һ�Ŷ�����
	BiTree* bitree = new BiTree();



	//������Ҫ�Ľڵ�
	HeroNode* root = new HeroNode(1, "SongJiang");
	HeroNode* node2 = new HeroNode(2, "WuYong");
	HeroNode* node3 = new HeroNode(3, "LuJunYi");
	HeroNode* node4 = new HeroNode(4, "LinChong");
	HeroNode* node5 = new HeroNode(5, "GuanSheng");



	//�ֶ�����һ�Ŷ�����
	root->setLeft(node2);
	root->setRight(node3);
	node3->setRight(node4);
	node3->setLeft(node5);
	bitree->setRoot(root);
	//���Դ���

	//cout << "ǰ�����" << endl;
	//bitree->preOrder1();
	//cout << "�������" << endl;
	//bitree->infixOrder1();
	//cout << "�������" << endl;
	//bitree->postOrder1();

	HeroNode* resNode;
	resNode = bitree->postOrderSearch(3);
	cout << "no:" << resNode->getNo() << "name:" << resNode->getName() << endl;
	//ǰ�����3�Σ��������4�Σ��������4��


	return 1;
}

