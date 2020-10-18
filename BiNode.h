#pragma once
#include <iostream>
using namespace std;


class HeroNode {
private:
	int no;      //节点的编号
	string name;  //节点存放的数值
	HeroNode* left = nullptr; //指向左子节点的指针
	HeroNode* right = nullptr; //指向右子节点的指针
public:
	//1.构造函数
	HeroNode(int no, string name);
	//2.set get方法
	int getNo();
	string getName();
	void setLeft(HeroNode* left);
	void setRight(HeroNode* right);

	//二叉树的遍历
	void printNode(HeroNode* node);
	//定义三种遍历算法
	//1.前序遍历
	void preOrder();
	//2.中序遍历
	void infixOrder();
	//3.后续遍历
	void postOrder();

	//二叉树的查找算法
	//1.前序查找
	HeroNode* preOrderSearch(int no);
	//2.中序查找
	HeroNode* infixOrderSearch(int no);
	//3.后续查找
	HeroNode* postOrderSearch(int no);

};
