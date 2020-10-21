#include <iostream>
using namespace std;


template<class T>
class ThrNode {
private:
	T data;
	int no;
	ThrNode<T>* left;
	ThrNode<T>* right;
	//0代表左子树，1代表右子树
	int ltag;
	int rtag;
public:
	ThrNode(T data, int Node) {
		this->data = data;
		this->left = nullptr;
		this->no = no;
		this->right = nullptr;
		this->ltag = 0;
		this->rtag = 0;
	}

	void printNode() {
		cout << "no:" << this->no << " " << "name:" << this->data << endl;
	}

	//中序遍历
	//1.左子树->父节点->右子树
	infixOrder() {
		if (this.left != nullptr) {
			this->infixOrder(); //递归向左子树遍历
		}

		//输出当前节点 
		printNode(this);

		if (this->right != nullptr) {
			this->infixOrder(); //递归向右遍历
		}
	}


};


class Bitree {
private:
	ThrNode<int>* root;
public:
	void setRoot(ThrNode<int>* root) {
		this->root = root;
	}
};


int main() {



	return 1;
}