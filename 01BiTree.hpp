#include <iostream>

using namespace std;



//创建一个二叉树的节点
template <class T>
struct BiNode {
	T data;
	BiNode* left;  //左子节点
	BiNode* right;  //右子节点
	BiNode(T x) {
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}

	//设置左孩子
	void setLeft(BiNode<T>* node) {
		this->left = node;
	}
	//设置右孩子
	void setRight(BiNode<T>* node) {
		this->right = node;
	}
};

template<class T>
class BiTree {
public:
	//1.前序遍历
	void PreOrder() {
		PreOrder(root);
	}
	//2.中序遍历
	void InfixOrder() {
		InfixOrder(root);
	}
	//3.后序遍历
	void PostOrder() {
		PostOrder(root);
	}
	//4.层序遍历
	void LevelOrder() {
	}

private:
	BiNode<T>* root;

	//对二叉树进行遍历
	//1.前序遍历
	void PreOrder(BiNode<T>* bt);
	//2.中序遍历
	void InfixOrder(BiNode<T>* bt);
	//3.后序遍历
	void PostOrder(BiNode<T>* bt);
};

//1.前序遍历 父节点->左节点->右节点
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //递归结束的条件
	}
	else {
		cout << bt->data << " ";
		PreOrder(bt->left);
		PreOrder(bt->right);
	}
}

//2.中序遍历 左节点->父节点->右节点
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

//3.后序遍历 左子节点->右子节点->父节点
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

