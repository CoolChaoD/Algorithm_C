#include <iostream>
#include <queue>
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
	BiTree(BiNode<T>* root) {
		this->root = root;
	}
	//1.前序遍历
	void PreOrder() {
		cout << "前序遍历" << endl;
		PreOrder(root);
		cout << endl;
	}
	//2.中序遍历
	void InfixOrder() {
		cout << "中序遍历" << endl;
		InfixOrder(root);
		cout << endl;
	}
	//3.后序遍历
	void PostOrder() {
		cout << "后序遍历" << endl;
		PostOrder(root);
		cout << endl;
	}
	//4.层序遍历
	void LevelOrder() {
		cout << "层序遍历" << endl;
		LevelOrder(root);
		cout << endl;
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
	//4.层序遍历
	void LevelOrder(BiNode<T>* bt);
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

//4. 层序遍历
template<class T>
void BiTree<T>::LevelOrder(BiNode<T>* bt) {
	queue<BiNode<T>*> q; //创建一个队列q
	BiNode<T>* front;
	if (bt == NULL) { //如果二叉树空那么直接返回
		return;
	}
	q.push(bt);
	while (!q.empty()) {
		front = q.front();//取出队列的第一个指针
		q.pop(); //出队
		cout << front->data << " ";
		if (front->left != NULL) {
			q.push(front->left);
		}
		if (front->right != NULL) {
			q.push(front->right);
		}
	}
}
