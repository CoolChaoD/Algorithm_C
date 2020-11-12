#include <iostream>

using namespace std;

template<class T>
struct BiNode {
	T data;
	BiNode* lchild;
	BiNode* rchild;
	BiNode(T data) {
		this->data = data;
		this->lchild = NULL;
		this->rchild = NULL;
	}
};

template <class T>
class BiTree {
	BiTree() {
		root = create(root);
	}
	//�������ı���
	void PostOrder() {
		PostOrder(root);
	}

private:
	BiNode<T>* root;
	//�������Ĵ���
	BiNode<T>* creat(BiNode<T>* bt);
	//������������
	void release(BiNode<T>* bt);

	//�������ı���
	//1.ǰ�����
	void PostOrder(BiNode<T>* bt);

};

//�������Ĵ���
template <class T>
BiNode<T>* BiTree<T>::creat(BiNode<T>* bt) {
	char ch;
	cout << "������ڵ��ֵ" << endl;
	cin >> ch;
	if (ch == "#") {
		bt = NULL; //����һ�ſ���
	}
	bt = new BiNode(ch);
	bt->lchild=creat(bt->lchild);
	bt->rchild=creat(bt->rchild);


	return bt;
}