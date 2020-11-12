#include <iostream>
#include <queue>
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
public:
	BiTree() {
		root = creat(root);
	}
	//二叉树的遍历
	// 1.前序遍历
	void PreOrder() {
		PreOrder(root);
		cout << endl;
	}
	// 2.中序遍历
	void InfixOrder() {
		InfixOrder(root);
		cout << endl;
	}
	//3.后序遍历
	void PostOrder() {
		PostOrder(root);
		cout << endl;
	}
	//4.层序遍历
	void LevelOrder() {
		LevelOrder(root);
		cout << endl;
	}
private:
	BiNode<T>* root;
	//二叉树的创建
	BiNode<T>* creat(BiNode<T>* bt);
	//二叉树的析构
	void release(BiNode<T>* bt);

	//二叉树的遍历
	//1.前序遍历
	void PreOrder(BiNode<T>* bt);
	//2.中序遍历
	void InfixOrder(BiNode<T>* bt);
	//3.后序遍历
	void PostOrder(BiNode<T>* bt);
	//4.层序遍历
	void LevelOrder(BiNode<T>* bt);
};

//二叉树的创建
template <class T>
BiNode<T>* BiTree<T>::creat(BiNode<T>* bt) {
	char ch;
	cout << "请输入节点的值" << endl;
	cin >> ch;
	if (ch == '#') {
		bt = NULL; //创建一颗空树
	}
	else {
		bt = new BiNode<T>(ch);
		bt->lchild = creat(bt->lchild);
		bt->rchild = creat(bt->rchild);
	}
	return bt;
}


//二叉树的析构
template <class T>
void BiTree<T>::release(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		//释放左子树
		release(bt->lchild);
		//释放右子树
		release(bt->rchild);
		//删除节点
		delete bt;
		bt = NULL;
	}
}


//二叉树的遍历
//1.前序遍历
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;   //递归结束的条件
	}
	else {
		cout << bt->data << " ";
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}


//2.中序遍历
template <class T>
void BiTree<T>::InfixOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		InfixOrder(bt->lchild);
		cout << bt->data << " ";
		InfixOrder(bt->rchild);
	}
}

//3.后序遍历
template <class T>
void BiTree<T>::PostOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		PostOrder(bt->lchild);
		PostOrder(bt->rchild);
		cout << bt->data << " ";
	}
}

//4.层序遍历
template<class T>
void BiTree<T>::LevelOrder(BiNode<T>* bt) {
	queue<BiNode<T>*> q;//创建一个队列q;
	BiNode<T>* front;
	if (bt == NULL) {
		return;
	}
	q.push(bt);
	while (!q.empty()) {
		front = q.front(); //从队列中取出第一个指针
		q.pop();//出队
		cout << front->data << " ";
		if (front->lchild != NULL) {
			q.push(front->lchild);
		}
		if (front->rchild != NULL) {
			q.push(front->rchild);
		}
	}
}