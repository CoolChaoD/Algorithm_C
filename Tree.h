#pragma once
#include "Nodefile.h"
#include <iostream>
using namespace std;

class Tree {
private:
	Node* root; //创建一个根节点
	Node* pre = nullptr;//pre始终指向上一个遍历的节点
public:

	//设置根节点
	void setRoot(Node* root);
	//线索化二叉树
	void threadBitree(Node* node);


};

