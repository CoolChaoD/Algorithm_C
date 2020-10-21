#pragma once
#include <iostream>
using namespace std;

class Node {
private:
	int no;
	string name;
	//定义左子树为0，前驱节点为1
	//定义右子树为1，后继节点为1
	int ltag;
	int rtag;
	//定义左右节点,指针一定要记得初始化
	Node* left;
	Node* right;


public:
	//构造函数
	Node(int no, string name);
	//1.设置节点
	void setLeft(Node* left);
	void setRight(Node* right);
	Node* getLeft();
	Node* getRight();
	// 2.获取名称
	int getNo();
	string getName();
	//3. 设置标志位
	void setLeftTag(int lefttype);
	void setRightTag(int righttype);
	int getLeftTag();
	int getRightTag();
	//4.打印节点
	void printNode();

};