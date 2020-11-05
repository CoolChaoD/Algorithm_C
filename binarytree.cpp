/*
二叉链表存储二叉树
*/
#include <iostream>

using namespace std;

template <class T>
struct BiNode {
	T data;
	BiNode<T>* lchild, * rchild;
	BiNode(T x) {
		data = x;
		lchild = NULL;
		rchild = NULL;
	}
};

template <class T>
class BiTree {
public:
	BiTree() {
		root = Creat(root);
	}
	void PreOrder() {
		PreOrder(root);
	}
private:
	//指向根节点的头指针
	BiNode<T>* root;
	//构造函数调用，创建一棵二叉树
	BiNode<T>* Creat(BiNode<T>* bt);
	//析构函数的调用
	void Release(BiNode<T>* bt);

	//二叉树的遍历
	//1.前序遍历
	void PreOrder(BiNode<T>* bt);
	//2.中序遍历
	void InOrder(BiNode<T>* bt);
	//3.后序遍历
	void PostOrder(BiNode<T>* bt);
	//4.层序遍历二叉树
	void LevelOrder();

};


//构造函数创建递归一棵二叉树
template<class T>
BiNode<T>* BiTree<T>::Creat(BiNode<T>* bt) {
	char ch;
	cin >> ch;
	if (ch == '#') {
		bt = NULL; //创建一棵空树
	}
	else {
		//生成一个节点，数据域为ch
		bt = new BiNode<T>(ch);
		bt->lchild = Creat(bt->lchild);//递归建立左子树
		bt->rchild = Creat(bt->rchild);//递归创建右子树
	}
	return bt;
}

//析构函数，释放二叉树
template <class T>
void BiTree<T>::Release(BiNode<T>* bt) {
	if (bt != NULL) {
		//释放左子树
		Release(bt->lchild);
		//释放右子树
		Release(bt->rchild);
		//释放根节点，根节点要在最后释放
		delete bt;
	}
}

//二叉树的遍历
//1.前序遍历(父节点->左子节点->右子节点)
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //递归结束的条件
	}
	else {
		cout << bt->data; //先访问根节点
		PreOrder(bt->lchild);//前序递归bt的左子树
		PreOrder(bt->rchild);//前序遍历bt的右子树
	}
}



int main() {

	BiTree<char>* bitree = new BiTree<char>;


	bitree->PreOrder();


	return 0;
}

