#include <iostream>
using namespace std;


template<class T>
class ThrNode {
public:
	T data;
	int no;
	ThrNode<T>* left;
	ThrNode<T>* right;
	//0代表左子树，1代表右子树
	int ltag;
	int rtag;
public:
	ThrNode(T data, int no) {
		this->data = data;
		this->left = nullptr;
		this->no = no;
		this->right = nullptr;
		this->ltag = 0;
		this->rtag = 0;
	}

	void printNode(ThrNode<string>* node) {
		cout << "no:" << node->no << " " << "name:" << node->data << endl;
	}

	//前序遍历
	//1.父节点->左子树->右子树
	void preOrder() {

		//打印当前节点
		printNode(this);

		//遍历左子树
		if (this->left != nullptr) {
			this->left->preOrder();
		}

		//递归遍历右子树
		if (this->right != nullptr) {
			this->right->preOrder();
		}
	}
	//中序遍历
	//2.左子树->父节点->右子树
	void infixOrder() {
		if (this->left != nullptr) {
			this->left->infixOrder(); //递归向左子树遍历
		}

		//输出当前节点 
		printNode(this);

		if (this->right != nullptr) {
			this->right->infixOrder(); //递归向右遍历
		}
	}

	//后序遍历
	void postOrder() {
		if (this->left != nullptr) {
			this->left->infixOrder(); //递归向左子树遍历
		}

		if (this->right != nullptr) {
			this->right->infixOrder(); //递归向右遍历
		}

		//输出当前节点 
		printNode(this);
	}

	void setRight(ThrNode<string>* right) {
		this->right = right;

	}

	void setLeft(ThrNode<string>* left) {
		this->left = left;
	}


	//设置左右标签
	void setLeftType(int leftype) {
		this->ltag = leftype;
	}

	void setRightType(int rightype) {
		this->rtag = rightype;
	}
};


class Bitree {
private:
	ThrNode<string>* root;
	//创建一个节点用来存储上一个节点
	ThrNode<string>* pre;
public:
	//Bitree(ThrNode<string>* root) {
	//	this->root = root;
	//}
	void setRoot(ThrNode<string>* root) {
		this->root = root;
	}
	void preOrder1() {
		if (this->root != nullptr) {
			root->preOrder();
		}
		else {
			cout << "二叉树为空，无法遍历" << endl;
		}
	}

	void infixOrder1() {
		if (this->root != nullptr) {
			root->infixOrder();
		}
		else {
			cout << "二叉树为空，无法遍历" << endl;
		}
	}

	void postOrder1() {
		if (this->root != nullptr) {
			root->postOrder();
		}
		else {
			cout << "二叉树为空，无法遍历" << endl;
		}
	}

	//1.前序线索化
	void preThreaded(ThrNode<string>* node) {
		if (node == nullptr) {
			return;
		}
		//处理中间节点
		if (node->left == nullptr) {
			node->setLeft(pre);
			node->setLeftType(1);
		}
		//处理右节点
		if (pre != nullptr && pre->right == nullptr) {
			pre->setRight(node);
			pre->setRightType(1);
		}
		pre = node;

		//处理左子树
		if (node->left != nullptr) {
			preThreaded(node->left);
		}

		//处理右子树
		if (node->right != nullptr) {
			preThreaded(node->right);
		}

	}


	//2. 中序线索化
	void infixThreaded(ThrNode<string>* node) {
		if (node == nullptr) {
			return;
		}
		//1.线索化左子树
		if (node->left != nullptr) {
			infixThreaded(node->left);
		}
		//2.处理中间节点
		//处理左节点
		if (node->left == nullptr) {
			node->setLeft(pre);
			node->setLeftType(1);
		}
		//处理右节点
		if (pre != nullptr && pre->right == nullptr) {
			pre->setRight(node);
			pre->setRightType(1);
		}
		pre = node;
		//3. 线索化右子树
		if (node->right != nullptr) {
			infixThreaded(node->right);
		}
	}
};


int main() {

	ThrNode<string>* root = new ThrNode<string>("SongJiang", 1);
	ThrNode<string>* node2 = new ThrNode<string>("WuYong", 2);
	ThrNode<string>* node3 = new ThrNode<string>("LinChong", 3);
	ThrNode<string>* node4 = new ThrNode<string>("GuanSheng", 4);
	ThrNode<string>* node5 = new ThrNode<string>("LiKui", 5);
	ThrNode<string>* node6 = new ThrNode<string>("GuanYu", 6);



	Bitree* bitree = new Bitree();
	bitree->setRoot(root);

	root->setLeft(node2);
	root->setRight(node3);
	node2->setLeft(node4);
	node2->setRight(node5);
	node3->setLeft(node6);


	//二叉树遍历测试
	cout << "前序遍历" << endl;
	bitree->preOrder1();
	//cout << "中序遍历" << endl;
	//bitree->infixOrder1();
	//cout << "后序遍历" << endl;
	//bitree->postOrder1();

	//二叉树的线索化测试
	bitree->preThreaded(root);

	ThrNode<string>* test = node3->left;
	if (test == nullptr) {
		cout << "The pre or later is null" << endl;
	}
	else {
		cout << "no:" << test->no << " " << "name:" << test->data << endl;
	}

	return 1;
}