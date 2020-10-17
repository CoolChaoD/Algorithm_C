#pragma once
#include <iostream>
using namespace std;


class HeroNode {
private:
	int no;      //节点的编号
	string name;  //节点存放的数值
	HeroNode* left; //指向左子节点的指针
	HeroNode* right; //指向右子节点的指针
public:
	//1.构造函数
	HeroNode(int no, string name);
	//2.set get方法
	int getNo();
	string getName();
	void setLeft(HeroNode* left);
	void setRight(HeroNode* right);

	//打印节点
	void printNode(HeroNode* node);
	//定义三种遍历算法
	//1.前序遍历
	void preOrder();

};
