#include <iostream>

using namespace std;



//创建一个二叉树的节点
template <class T>
struct BiNode {
	T data;
	BiNode* left;  //左子节点
	BiNode* right;  //右子节点
	BiNode(T x) {
		this->data = x;
	}
};

template<class T>
class BiTree {



};
