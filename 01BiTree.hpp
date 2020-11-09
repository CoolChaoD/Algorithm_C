#include <iostream>

using namespace std;



//����һ���������Ľڵ�
template <class T>
struct BiNode {
	T data;
	BiNode* left;  //���ӽڵ�
	BiNode* right;  //���ӽڵ�
	BiNode(T x) {
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}

	//��������
	void setLeft(BiNode<T>* node) {
		this->left = node;
	}
	//�����Һ���
	void setRight(BiNode<T>* node) {
		this->right = node;
	}
};

template<class T>
class BiTree {
public:
	//1.ǰ�����
	void PreOrder() {
		PreOrder(root);
	}
	//2.�������
	void InfixOrder() {
		InfixOrder(root);
	}
	//3.�������
	void PostOrder() {
		PostOrder(root);
	}
	//4.�������
	void LevelOrder() {
	}

private:
	BiNode<T>* root;

	//�Զ��������б���
	//1.ǰ�����
	void PreOrder(BiNode<T>* bt);
	//2.�������
	void InfixOrder(BiNode<T>* bt);
	//3.�������
	void PostOrder(BiNode<T>* bt);
};

//1.ǰ����� ���ڵ�->��ڵ�->�ҽڵ�
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //�ݹ����������
	}
	else {
		cout << bt->data << " ";
		PreOrder(bt->left);
		PreOrder(bt->right);
	}
}

//2.������� ��ڵ�->���ڵ�->�ҽڵ�
template<class T>
void BiTree<T>::InfixOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		InfixOrder(bt->left);
		cout << bt->data << " ";
		InfixOrder(bt->right);
	}
}

//3.������� ���ӽڵ�->���ӽڵ�->���ڵ�
template<class T>
void BiTree<T>::PostOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		PostOrder(bt->left);
		PostOrder(bt->right);
		cout << bt->data << " ";
	}
}

