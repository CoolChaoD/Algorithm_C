#include "Nodefile.h"


//构造函数
Node::Node(int no, string name) {

	this->no = no;
	this->name = name;
	this->left = NULL;
	this->right = NULL;
	this->ltag = 0;
	this->rtag = 0;
}
//1.设置节点
void Node::setLeft(Node* left) {
	this->left = left;
}

void Node::setRight(Node* right) {
	this->right = right;
}


// 2.获取名称
int Node::getNo() {
	return this->no;
}
string Node::getName() {
	return this->name;
}
Node* Node::getLeft() {
	return this->left;
}
Node* Node::getRight() {
	return this->right;

}

//3. 设置标志位
void Node::setLeftTag(int lefttype) {
	this->ltag = lefttype;
}
void Node::setRightTag(int righttype) {
	this->rtag = righttype;
}
int Node::getLeftTag() {
	return this->ltag;
}
int Node::getRightTag() {
	return this->rtag;
}

//4.打印节点
void Node::printNode() {
	cout << "no:" << this->no << "  " << "name:" << this->name << endl;
}