#pragma once
#include <iostream>
using namespace std;

class Node {
private:
	int no;
	string name;
	//����������Ϊ0��ǰ���ڵ�Ϊ1
	//����������Ϊ1����̽ڵ�Ϊ1
	int ltag;
	int rtag;
	//�������ҽڵ�,ָ��һ��Ҫ�ǵó�ʼ��
	Node* left;
	Node* right;


public:
	//���캯��
	Node(int no, string name);
	//1.���ýڵ�
	void setLeft(Node* left);
	void setRight(Node* right);
	Node* getLeft();
	Node* getRight();
	// 2.��ȡ����
	int getNo();
	string getName();
	//3. ���ñ�־λ
	void setLeftTag(int lefttype);
	void setRightTag(int righttype);
	int getLeftTag();
	int getRightTag();
	//4.��ӡ�ڵ�
	void printNode();

};