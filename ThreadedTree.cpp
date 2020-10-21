#include <iostream>
using namespace std;


template<class T>
class ThrNode {
public:
	T data;
	int no;
	ThrNode<T>* left;
	ThrNode<T>* right;
	//0������������1����������
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

	//ǰ�����
	//1.���ڵ�->������->������
	void preOrder() {

		//��ӡ��ǰ�ڵ�
		printNode(this);

		//����������
		if (this->left != nullptr) {
			this->left->preOrder();
		}

		//�ݹ����������
		if (this->right != nullptr) {
			this->right->preOrder();
		}
	}
	//�������
	//2.������->���ڵ�->������
	void infixOrder() {
		if (this->left != nullptr) {
			this->left->infixOrder(); //�ݹ�������������
		}

		//�����ǰ�ڵ� 
		printNode(this);

		if (this->right != nullptr) {
			this->right->infixOrder(); //�ݹ����ұ���
		}
	}

	//�������
	void postOrder() {
		if (this->left != nullptr) {
			this->left->infixOrder(); //�ݹ�������������
		}

		if (this->right != nullptr) {
			this->right->infixOrder(); //�ݹ����ұ���
		}

		//�����ǰ�ڵ� 
		printNode(this);
	}

	void setRight(ThrNode<string>* right) {
		this->right = right;

	}

	void setLeft(ThrNode<string>* left) {
		this->left = left;
	}


	//�������ұ�ǩ
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
	//����һ���ڵ������洢��һ���ڵ�
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
			cout << "������Ϊ�գ��޷�����" << endl;
		}
	}

	void infixOrder1() {
		if (this->root != nullptr) {
			root->infixOrder();
		}
		else {
			cout << "������Ϊ�գ��޷�����" << endl;
		}
	}

	void postOrder1() {
		if (this->root != nullptr) {
			root->postOrder();
		}
		else {
			cout << "������Ϊ�գ��޷�����" << endl;
		}
	}

	//1.ǰ��������
	void preThreaded(ThrNode<string>* node) {
		if (node == nullptr) {
			return;
		}
		//�����м�ڵ�
		if (node->left == nullptr) {
			node->setLeft(pre);
			node->setLeftType(1);
		}
		//�����ҽڵ�
		if (pre != nullptr && pre->right == nullptr) {
			pre->setRight(node);
			pre->setRightType(1);
		}
		pre = node;

		//����������
		if (node->left != nullptr) {
			preThreaded(node->left);
		}

		//����������
		if (node->right != nullptr) {
			preThreaded(node->right);
		}

	}


	//2. ����������
	void infixThreaded(ThrNode<string>* node) {
		if (node == nullptr) {
			return;
		}
		//1.������������
		if (node->left != nullptr) {
			infixThreaded(node->left);
		}
		//2.�����м�ڵ�
		//������ڵ�
		if (node->left == nullptr) {
			node->setLeft(pre);
			node->setLeftType(1);
		}
		//�����ҽڵ�
		if (pre != nullptr && pre->right == nullptr) {
			pre->setRight(node);
			pre->setRightType(1);
		}
		pre = node;
		//3. ������������
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


	//��������������
	cout << "ǰ�����" << endl;
	bitree->preOrder1();
	//cout << "�������" << endl;
	//bitree->infixOrder1();
	//cout << "�������" << endl;
	//bitree->postOrder1();

	//������������������
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