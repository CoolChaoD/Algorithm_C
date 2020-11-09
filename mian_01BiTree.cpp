#include "01BiTree.hpp"
#include <string>



using namespace std;

int main() {


	BiNode<string>* root = new BiNode<string>("songjiang");
	BiNode<string>* node1 = new BiNode<string>("wuyong");
	BiNode<string>* node2 = new BiNode<string>("linchong");
	BiNode<string>* node3 = new BiNode<string>("lujunyi");
	BiNode<string>* node4 = new BiNode<string>("likui");


	BiTree<string>* bitree = new BiTree<string>(root); //创建一棵字符串类型的二叉树
	//开始创建树
	root->setLeft(node1);
	root->setRight(node2);
	node1->setLeft(node3);
	node1->setRight(node4);


	bitree->PreOrder();
	bitree->InfixOrder();
	bitree->PostOrder();
	bitree->LevelOrder();


	return 0;
}