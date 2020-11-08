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
		preOrder(root);
	}
	void InOrder() {
		inOrder(root);
	}
	void PostOrder() {
		postOrder(root);
	}

	void LevelOrder();

private:
	//指向根节点的头指针
	BiNode<T>* root;
	//构造函数调用，创建一棵二叉树
	BiNode<T>* Creat(BiNode<T>* bt);
	//析构函数的调用
	void Release(BiNode<T>* bt);


	//二叉树的遍历
	//1.前序遍历
	void preOrder(BiNode<T>* bt);
	//2.中序遍历
	void inOrder(BiNode<T>* bt);
	//3.后序遍历
	void postOrder(BiNode<T>* bt);



};


//构造函数创建递归一棵二叉树
template<class T>
BiNode<T>* BiTree<T>::Creat(BiNode<T>* bt) {
	char ch;
	cout << "Input:" << endl;
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
void BiTree<T>::preOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //递归结束的条件
	}
	else {
		cout << bt->data << " "; //先访问根节点
		preOrder(bt->lchild);//前序递归bt的左子树
		preOrder(bt->rchild);//前序遍历bt的右子树
	}

}
//2.中序遍历(左子节点->父节点->右子节点)
template <class T>
void BiTree<T>::inOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;     //递归结束的条件
	}
	else {
		inOrder(bt->lchild);//中序递归遍历左子树
		cout << bt->data << " ";   //输出中间节点的数据
		inOrder(bt->rchild);//中序递归遍历右子树
	}

}

//3.后序遍历
//后序遍历的顺序(左子节点->右子节点->中间节点)
template<class T>
void BiTree<T>::postOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;    //递归的结束条件
	}
	else {
		postOrder(bt->lchild);//后序遍历左子树
		postOrder(bt->rchild);//后序遍历右子树
		cout << bt->data << " ";//输出中间节点的数据
	}
}

//4.层序遍历
//层序遍历按照顺序进行输出，采用队列先进先出
template<class T>
void BiTree<T>::LevelOrder() {
	BiNode<T>* Q[20];
	BiNode<T>* q;
	int front = -1;
	int rear = -1;
	if (root == NULL) { //如果二叉树为空，那么则返回
		return;
	}
	Q[++rear] = root; //根指针入队
	while (front != rear) {
		q = Q[++front];   //出队
		cout << q->data << " ";
		if (q->lchild != NULL) Q[++rear] = q->lchild;
		if (q->rchild != NULL) Q[++rear] = q->rchild;
	}
}





int main() {

	BiTree<char>* bitree = new BiTree<char>;

	cout << "前序遍历" << endl;
	bitree->PreOrder();
	cout << endl << "中序遍历" << endl;
	bitree->InOrder();
	cout << endl << "后序遍历" << endl;
	bitree->PostOrder();
	cout << endl << "层序遍历" << endl;
	bitree->LevelOrder();
	return 0;
}

