/*
  实现二叉树的创建遍历、以及查找
*/
#include  <iostream>
#include  <list>

using namespace std;

//二叉树节点
template <class T>
class BiTreeNode {
public:
	T data;
	BiTreeNode<T>* left;
	BiTreeNode<T>* right;
	BiTreeNode(T data) {
		this->data = data;
		this->left = NULL;
		this->right = NULL;//指针为空代表不指向任何地址的指针
	}
};

//二叉树的接口实现
template <class T>
class BiTree {
private:
	int size;//树中节点的个数
public:
	//构造函数
	BiTreeNode<T>* root;//指向根节点的指针
	BiTree() {
		size = 0;
		root = NULL;
	}
	//析构函数
	~BiTree() {
		remove(root);
	}
	//1.将data插入到node的左孩子
	bool insert_left(BiTreeNode<T>* node, T data);
	//2.将data插入到node的右孩子
	bool insert_right(BiTreeNode<T>* node, T data);
	//3.删除以node为根节点的子树
	bool remove(BiTreeNode<T>*& node);
	//4.递归实现遍历
	//4.1前序遍历
	bool preOrderR(BiTreeNode<T>* node, list<T>* l);
	//4.2中序遍历
	bool InOrderR(BiTreeNode<T>* node, list<T>* l);
	//4.3后序遍历
	bool postOrderR(BiTreeNode<T>* node, list<T>* l);

	//5.迭代实现遍历
	//4.1前序遍历
	bool preOrderI(BiTreeNode<T>* node, list<T>* l);
	//4.2中序遍历
	bool InOrderI(BiTreeNode<T>* node, list<T>* l);
	//4.3后序遍历
	bool postOrderI(BiTreeNode<T>* node, list<T>* l);

	//6.层序遍历
	bool level(BiTreeNode<T>* node, list<T>* l);
	//7.计算以node为根节点的树的高度
	int height(BiTreeNode<T>* node);
};


//1.将data插入到node的左孩子,并判断是否插入成功
template<class T>
bool BiTree<T>::insert_left(BiTreeNode<T>* node, T data) {
	if (node == NULL) { //不允许空树插入节点
		return false;   //若树为空说明插入失败
	}
}
