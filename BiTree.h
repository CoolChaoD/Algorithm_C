#pragma once
#include "BiNode.h"

class BiTree {
private:
	HeroNode* root;//����һ�����ڵ�
public:
	void setRoot(HeroNode* root); //���ø��ڵ�
	//���ֱ����㷨
	//1.ǰ�����
	void preOrder1();
	//2.�������
	void infixOrder1();
	//3.�������
	void postOrder1();
};
