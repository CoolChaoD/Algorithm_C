#pragma once
#include "Nodefile.h"
#include <iostream>
using namespace std;

class Tree {
private:
	Node* root; //����һ�����ڵ�
	Node* pre = nullptr;//preʼ��ָ����һ�������Ľڵ�
public:

	//���ø��ڵ�
	void setRoot(Node* root);
	//������������
	void threadBitree(Node* node);


};

