/*
��������洢������
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
	//ָ����ڵ��ͷָ��
	BiNode<T>* root;
	//���캯�����ã�����һ�ö�����
	BiNode<T>* Creat(BiNode<T>* bt);
	//���������ĵ���
	void Release(BiNode<T>* bt);

	//�������ı���
	//1.ǰ�����
	void PreOrder(BiNode<T>* bt);
	//2.�������
	void InOrder(BiNode<T>* bt);
	//3.�������
	void PostOrder(BiNode<T>* bt);
	//4.�������������
	void LevelOrder();

};


//���캯�������ݹ�һ�ö�����
template<class T>
BiNode<T>* BiTree<T>::Creat(BiNode<T>* bt) {
	char ch;
	cin >> ch;
	if (ch == '#') {
		bt = NULL; //����һ�ÿ���
	}
	else {
		//����һ���ڵ㣬������Ϊch
		bt = new BiNode<T>(ch);
		bt->lchild = Creat(bt->lchild);//�ݹ齨��������
		bt->rchild = Creat(bt->rchild);//�ݹ鴴��������
	}
	return bt;
}

//�����������ͷŶ�����
template <class T>
void BiTree<T>::Release(BiNode<T>* bt) {
	if (bt != NULL) {
		//�ͷ�������
		Release(bt->lchild);
		//�ͷ�������
		Release(bt->rchild);
		//�ͷŸ��ڵ㣬���ڵ�Ҫ������ͷ�
		delete bt;
	}
}

//�������ı���
//1.ǰ�����(���ڵ�->���ӽڵ�->���ӽڵ�)
template <class T>
void BiTree<T>::PreOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //�ݹ����������
	}
	else {
		cout << bt->data; //�ȷ��ʸ��ڵ�
		PreOrder(bt->lchild);//ǰ��ݹ�bt��������
		PreOrder(bt->rchild);//ǰ�����bt��������
	}
}



int main() {

	BiTree<char>* bitree = new BiTree<char>;


	bitree->PreOrder();


	return 0;
}

