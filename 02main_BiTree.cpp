#include "02BiTree.hpp"



int main() {
	BiTree<char>* bitree = new BiTree<char>;


	//cout << "ǰ�����" << endl;
	//bitree->PreOrder();
	//cout << "�������" << endl;
	//bitree->InfixOrder();
	//cout << "�������" << endl;
	//bitree->PostOrder();
	cout << "�������" << endl;
	bitree->LevelOrder();
	return 0;
}