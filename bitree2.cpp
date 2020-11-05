/*
  ʵ�ֶ������Ĵ����������Լ�����
*/
#include  <iostream>
#include  <list>

using namespace std;

//�������ڵ�
template <class T>
class BiTreeNode {
public:
	T data;
	BiTreeNode<T>* left;
	BiTreeNode<T>* right;
	BiTreeNode(T data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;//ָ��Ϊ�մ���ָ���κε�ַ��ָ��
	}
};

//�������Ľӿ�ʵ��
template <class T>
class BiTree {
private:
	int size;//���нڵ�ĸ���
public:
	//���캯��
	BiTreeNode<T>* root;//ָ����ڵ��ָ��
	BiTree() {
		size = 0;
		root = NULL;
	}
	//��������
	~BiTree() {
		remove(root);
	}
	//1.��data���뵽node������
	bool insert_left(BiTreeNode<T>* node, T data);
	//2.��data���뵽node���Һ���
	bool insert_right(BiTreeNode<T>* node, T data);
	//3.ɾ����nodeΪ���ڵ������
	bool remove(BiTreeNode<T>*& node);
	//4.�ݹ�ʵ�ֱ���
	//4.1ǰ�����
	bool preOrderR(BiTreeNode<T>* node, list<T>* l);
	//4.2�������
	bool InOrderR(BiTreeNode<T>* node, list<T>* l);
	//4.3�������
	bool postOrderR(BiTreeNode<T>* node, list<T>* l);

	//5.����ʵ�ֱ���
	//4.1ǰ�����
	bool preOrderI(BiTreeNode<T>* node, list<T>* l);
	//4.2�������
	bool InOrderI(BiTreeNode<T>* node, list<T>* l);
	//4.3�������
	bool postOrderI(BiTreeNode<T>* node, list<T>* l);

	//6.�������
	bool level(BiTreeNode<T>* node, list<T>* l);
	//7.������nodeΪ���ڵ�����ĸ߶�
	int height(BiTreeNode<T>* node);
};


//1.��data���뵽node������,���ж��Ƿ����ɹ�
template<class T>
bool BiTree<T>::insert_left(BiTreeNode<T>* node, T data) {
	if (node == NULL) { //�������������ڵ�
		return false;   //����Ϊ��˵������ʧ��
	}
}
