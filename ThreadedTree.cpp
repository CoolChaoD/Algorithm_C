#include <iostream>
using namespace std;


template<class T>
class ThrNode {
private:
	T data;
	int no;
	ThrNode<T>* left;
	ThrNode<T>* right;
	//0������������1����������
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

	//�������
	//1.������->���ڵ�->������
	infixOrder() {
		if (this.left != nullptr) {
			this->infixOrder(); //�ݹ�������������
		}

		//�����ǰ�ڵ� 
		printNode(this);

		if (this->right != nullptr) {
			this->infixOrder(); //�ݹ����ұ���
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