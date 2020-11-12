#include "02BiTree.hpp"



int main() {
	BiTree<char>* bitree = new BiTree<char>;


	cout << "前序遍历" << endl;
	bitree->PreOrder();
	cout << "中序遍历" << endl;
	bitree->InfixOrder();
	cout << "后序遍历" << endl;
	bitree->PostOrder();
	cout << "层序遍历" << endl;
	bitree->LevelOrder() << endl;
	return 0;
}