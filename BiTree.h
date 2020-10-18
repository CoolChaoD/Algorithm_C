#pragma once
#include "BiNode.h"

class BiTree {
private:
	HeroNode* root;//创建一个根节点
public:
	void setRoot(HeroNode* root); //设置根节点
	void preOrder1();//前序遍历
};
