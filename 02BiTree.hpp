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
	//�������ı���
	// 1.ǰ�����
	void PreOrder() {
		PreOrder(root);
		cout << endl;
	}
	// 2.�������
	void InfixOrder() {
		InfixOrder(root);
		cout << endl;
	}
	//3.�������
	void PostOrder() {
		PostOrder(root);
		cout << endl;
	}
	//4.�������
	void LevelOrder() {
		LevelOrder(root);
		cout << endl;
	}
private:
	BiNode<T>* root;
	//�������Ĵ���
	BiNode<T>* creat(BiNode<T>* bt);
	//������������
	void release(BiNode<T>* bt);

	//�������ı���
	//1.ǰ�����
	void PreOrder(BiNode<T>* bt);
	//2.�������
	void InfixOrder(BiNode<T>* bt);
	//3.�������
	void PostOrder(BiNode<T>* bt);
	//4.�������
	void LevelOrder(BiNode<T>* bt);
};

//�������Ĵ���
template <class T>
BiNode<T>* BiTree<T>::creat(BiNode<T>* bt) {
	char ch;
	cout << "������ڵ��ֵ" << endl;
	cin >> ch;
	if (ch == '#') {
		bt = NULL; //����һ�ſ���
	}
	else {
		bt = new BiNode<T>(ch);
		bt->lchild = creat(bt->lchild);
		bt->rchild = creat(bt->rchild);
	}
	return bt;
}


//������������
template <class T>
void BiTree<T>::release(BiNode<T>* bt) {
	if (bt == NULL) {
		return;
	}
	else {
		//�ͷ�������
		release(bt->lchild);
		//�ͷ�������
		release(bt->rchild);
		//ɾ���ڵ�
		delete bt;
		bt = NULL;
	}
}


//�������ı���
//1.ǰ�����
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;   //�ݹ����������
	}
	else {
		cout << bt->data << " ";
		PreOrder(bt->lchild);
		PreOrder(bt->rchild);
	}
}


//2.�������
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

//3.�������
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

//4.�������
template<class T>
void BiTree<T>::LevelOrder(BiNode<T>* bt) {
	queue<BiNode<T>*> q;//����һ������q;
	BiNode<T>* front;
	if (bt == NULL) {
		return;
	}
	q.push(bt);
	while (!q.empty()) {
		front = q.front(); //�Ӷ�����ȡ����һ��ָ��
		q.pop();//����
		cout << front->data << " ";
		if (front->lchild != NULL) {
			q.push(front->lchild);
		}
		if (front->rchild != NULL) {
			q.push(front->rchild);
		}
	}
}