#pragma once
#include <iostream>
using namespace std;


class HeroNode {
private:
	int no;      //�ڵ�ı��
	string name;  //�ڵ��ŵ���ֵ
	HeroNode* left = nullptr; //ָ�����ӽڵ��ָ��
	HeroNode* right = nullptr; //ָ�����ӽڵ��ָ��
public:
	//1.���캯��
	HeroNode(int no, string name);
	//2.set get����
	int getNo();
	string getName();
	void setLeft(HeroNode* left);
	void setRight(HeroNode* right);

	//�������ı���
	void printNode(HeroNode* node);
	//�������ֱ����㷨
	//1.ǰ�����
	void preOrder();
	//2.�������
	void infixOrder();
	//3.��������
	void postOrder();

	//�������Ĳ����㷨
	//1.ǰ�����
	HeroNode* preOrderSearch(int no);
	//2.�������
	HeroNode* infixOrderSearch(int no);
	//3.��������
	HeroNode* postOrderSearch(int no);

};
