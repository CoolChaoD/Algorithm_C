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
	//二叉树的遍历
	void PostOrder() {
		PostOrder(root);
	}

private:
	BiNode<T>* root;
	//二叉树的创建
	BiNode<T>* creat(BiNode<T>* bt);
	//二叉树的析构
	void release(BiNode<T>* bt);

	//二叉树的遍历
	//1.前序遍历
	void PostOrder(BiNode<T>* bt);

};

//二叉树的创建
template <class T>
BiNode<T>* BiTree<T>::creat(BiNode<T>* bt) {
	char ch;
	cout << "请输入节点的值" << endl;
	cin >> ch;
	if (ch == "#") {
		bt = NULL; //创建一颗空树
	}
	bt = new BiNode(ch);
	bt->lchild=creat(bt->lchild);
	bt->rchild=creat(bt->rchild);


	return bt;
}