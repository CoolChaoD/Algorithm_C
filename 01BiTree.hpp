#include <iostream>
#include <queue>
using namespace std;



//����һ���������Ľڵ�
template <class T>
struct BiNode {
	T data;
	BiNode* left;  //���ӽڵ�
	BiNode* right;  //���ӽڵ�
	BiNode(T x) {
		this->data = x;
		this->left = NULL;
		this->right = NULL;
	}

	//��������
	void setLeft(BiNode<T>* node) {
		this->left = node;
	}
	//�����Һ���
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
	//1.ǰ�����
	void PreOrder() {
		cout << "ǰ�����" << endl;
		PreOrder(root);
		cout << endl;
	}
	//2.�������
	void InfixOrder() {
		cout << "�������" << endl;
		InfixOrder(root);
		cout << endl;
	}
	//3.�������
	void PostOrder() {
		cout << "�������" << endl;
		PostOrder(root);
		cout << endl;
	}
	//4.�������
	void LevelOrder() {
		cout << "�������" << endl;
		LevelOrder(root);
		cout << endl;
	}


private:

	BiNode<T>* root;
	//�Զ��������б���
	//1.ǰ�����
	void PreOrder(BiNode<T>* bt);
	//2.�������
	void InfixOrder(BiNode<T>* bt);
	//3.�������
	void PostOrder(BiNode<T>* bt);
	//4.�������
	void LevelOrder(BiNode<T>* bt);
};

//1.ǰ����� ���ڵ�->��ڵ�->�ҽڵ�
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //�ݹ����������
	}
	else {
		cout << bt->data << " ";
		PreOrder(bt->left);
		PreOrder(bt->right);
	}
}

//2.������� ��ڵ�->���ڵ�->�ҽڵ�
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

//3.������� ���ӽڵ�->���ӽڵ�->���ڵ�
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

//4. �������
template<class T>
void BiTree<T>::LevelOrder(BiNode<T>* bt) {
	queue<BiNode<T>*> q; //����һ������q
	BiNode<T>* front;
	if (bt == NULL) { //�������������ôֱ�ӷ���
		return;
	}
	q.push(bt);
	while (!q.empty()) {
		front = q.front();//ȡ�����еĵ�һ��ָ��
		q.pop(); //����
		cout << front->data << " ";
		if (front->left != NULL) {
			q.push(front->left);
		}
		if (front->right != NULL) {
			q.push(front->right);
		}
	}
}
