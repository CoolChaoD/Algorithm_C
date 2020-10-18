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


	//三种查找算法
	//1.前序查找
	HeroNode* preOrderSearch(int no);
	//2.中序查找
	HeroNode* infixOrderSearch(int no);
	//3.后续查找
	HeroNode* postOrderSearch(int no);
};
