#include <iostream>
#include "Nodefile.h"
#include "Tree.h"

using namespace std;

int main() {
	Node* root = new Node(1, "SongJiang");
	Node* node1 = new Node(2, "WuYong");
	Node* node2 = new Node(3, "LuJunYi");
	Node* node3 = new Node(4, "LinChong");
	Node* node4 = new Node(5, "GuanSheng");
	Node* node5 = new Node(6, "SongJiang");


	Tree* bitree = new Tree();
	bitree->setRoot(root);

	root->setLeft(node1);
	root->setRight(node2);
	node1->setLeft(node3);
	node1->setRight(node4);
	node2->setLeft(node5);

	//ÏßË÷»¯¶þ²æÊ÷
	bitree->threadBitree(root);

	Node* testNode = node5->getLeft();
	testNode->printNode();


}