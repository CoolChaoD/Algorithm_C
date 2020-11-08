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
	//ָ����ڵ��ͷָ��
	BiNode<T>* root;
	//���캯�����ã�����һ�ö�����
	BiNode<T>* Creat(BiNode<T>* bt);
	//���������ĵ���
	void Release(BiNode<T>* bt);


	//�������ı���
	//1.ǰ�����
	void preOrder(BiNode<T>* bt);
	//2.�������
	void inOrder(BiNode<T>* bt);
	//3.�������
	void postOrder(BiNode<T>* bt);



};


//���캯�������ݹ�һ�ö�����
template<class T>
BiNode<T>* BiTree<T>::Creat(BiNode<T>* bt) {
	char ch;
	cout << "Input:" << endl;
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
void BiTree<T>::preOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;  //�ݹ����������
	}
	else {
		cout << bt->data << " "; //�ȷ��ʸ��ڵ�
		preOrder(bt->lchild);//ǰ��ݹ�bt��������
		preOrder(bt->rchild);//ǰ�����bt��������
	}

}
//2.�������(���ӽڵ�->���ڵ�->���ӽڵ�)
template <class T>
void BiTree<T>::inOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;     //�ݹ����������
	}
	else {
		inOrder(bt->lchild);//����ݹ����������
		cout << bt->data << " ";   //����м�ڵ������
		inOrder(bt->rchild);//����ݹ����������
	}

}

//3.�������
//���������˳��(���ӽڵ�->���ӽڵ�->�м�ڵ�)
template<class T>
void BiTree<T>::postOrder(BiNode<T>* bt) {
	if (bt == NULL) {
		return;    //�ݹ�Ľ�������
	}
	else {
		postOrder(bt->lchild);//�������������
		postOrder(bt->rchild);//�������������
		cout << bt->data << " ";//����м�ڵ������
	}
}

//4.�������
//�����������˳�������������ö����Ƚ��ȳ�
template<class T>
void BiTree<T>::LevelOrder() {
	BiNode<T>* Q[20];
	BiNode<T>* q;
	int front = -1;
	int rear = -1;
	if (root == NULL) { //���������Ϊ�գ���ô�򷵻�
		return;
	}
	Q[++rear] = root; //��ָ�����
	while (front != rear) {
		q = Q[++front];   //����
		cout << q->data << " ";
		if (q->lchild != NULL) Q[++rear] = q->lchild;
		if (q->rchild != NULL) Q[++rear] = q->rchild;
	}
}





int main() {

	BiTree<char>* bitree = new BiTree<char>;

	cout << "ǰ�����" << endl;
	bitree->PreOrder();
	cout << endl << "�������" << endl;
	bitree->InOrder();
	cout << endl << "�������" << endl;
	bitree->PostOrder();
	cout << endl << "�������" << endl;
	bitree->LevelOrder();
	return 0;
}

