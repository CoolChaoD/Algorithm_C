#pragma once
#include "BiNode.h"

class BiTree {
private:
	HeroNode* root;//创建一个根节点
public:
	void setRoot(HeroNode* root); //设置根节点
	//三种遍历算法
	//1.前序遍历
	void preOrder1();
	//2.中序遍历
	void infixOrder1();
	//3.后序遍历
	void postOrder1();
};
