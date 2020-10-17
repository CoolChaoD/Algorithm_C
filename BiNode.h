#pragma once
#include <iostream>
using namespace std;


class HeroNode {
private:
	int no;      //�ڵ�ı��
	string name;  //�ڵ��ŵ���ֵ
	HeroNode* left; //ָ�����ӽڵ��ָ��
	HeroNode* right; //ָ�����ӽڵ��ָ��
public:
	//1.���캯��
	HeroNode(int no, string name);
	//2.set get����
	int getNo();
	string getName();
	void setLeft(HeroNode* left);
	void setRight(HeroNode* right);

	//��ӡ�ڵ�
	void printNode(HeroNode* node);
	//�������ֱ����㷨
	//1.ǰ�����
	void preOrder();

};
