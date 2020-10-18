#include "BiNode.h"


//���캯��
HeroNode::HeroNode(int no, string name) {
	this->name = name;
	this->no = no;
}

//get����
int HeroNode::getNo() {
	return no;
}
string HeroNode::getName() {
	return name;
}

//set����
void HeroNode::setLeft(HeroNode* left) {
	this->left = left;
}

void HeroNode::setRight(HeroNode* right) {
	this->right = right;
}

//��ӡ�ڵ�
void HeroNode::printNode(HeroNode* node) {
	cout << "no:" << node->getNo() << "  name:" << node->getName() << endl;
}

//1.ǰ�����
//˳�򣺸��ڵ�->���ӽڵ�->���ӽڵ�
void HeroNode::preOrder() {
	//����������ڵ�
	printNode(this);
	//�ݹ�������������
	if (this->left != nullptr) {
		//cout << "����������" << endl;
		this->left->preOrder();
	}

	//�ݹ�������������
	if (this->right != nullptr) {
		this->right->preOrder();
	}
}

//2.�������
//˳�����ӽڵ�->���ڵ�->���ӽڵ�
void HeroNode::infixOrder() {
	//1.���ж��������Ƿ�Ϊ�գ�����Ϊ�գ����ȥ�ݹ����
	if (this->left != nullptr) {
		this->left->infixOrder();//�ݹ������������еݹ����
	}

	//2.������ڵ�
	printNode(this);//��ӡ��ǰָ��

	//3.����ж��������Ƿ�Ϊ�գ�����Ϊ�գ����ȥ���еݹ����
	if (this->right != nullptr) {
		this->right->infixOrder();
	}
}

//3.�������
void HeroNode::postOrder() {
	//1.���ж��������Ƿ�Ϊ�գ�����Ϊ�գ���ݹ��������
	if (this->left != nullptr) {
		this->left->postOrder();
	}
	//2.�ж��������Ƿ�Ϊ�գ�����Ϊ�գ���ݹ����ұ���
	if (this->right != nullptr) {
		this->right->postOrder();
	}

	//3.�����ǰ�ڵ�
	printNode(this);
}

//�������Ĳ����㷨
//1.ǰ�����
HeroNode* HeroNode::preOrderSearch(int no) {
	//1.�����жϵ�ǰ����ڵ��ǲ���������Ҫ���ҵ�
	cout << "����ǰ�����" << endl;
	if (this->no == no) {
		return this;
	}
	//2.�жϵ�ǰ�ڵ����ڵ��ǲ���Ϊ�գ�����Ϊ����ݹ����ǰ�����
	HeroNode* resNode = nullptr;
	if (this->left != nullptr) {
		resNode = this->left->preOrderSearch(no);//�ݹ���в���
	}
	if (resNode != nullptr) {
		return resNode;
	}
	//3.�жϵ�ǰ�ڵ���ҽڵ��Ƿ�Ϊ�գ�����Ϊ����ݹ�ǰ�����
	if (this->right != nullptr) {
		resNode = this->right->preOrderSearch(no);//�ݹ�ǰ�����
	}
	return resNode;

}
//2.�������
HeroNode* HeroNode::infixOrderSearch(int no) {
	//1.�����жϵ�ǰ�ڵ���ӽڵ��ǲ���Ϊ�գ�������ǿգ���ô�ò��õݹ�ķ�ʽ��ծ
	HeroNode* resNode = nullptr;
	if (this->left != nullptr) {
		resNode = this->left->infixOrderSearch(no);//�ݹ���в���
	}
	if (resNode != nullptr) {
		return resNode;
	}
	//2.�жϵ�ǰ�ڵ��ǲ���������Ҫ���ҵĽڵ�
	cout << "�����������" << endl;
	if (this->no == no) {
		return this;
	}
	//3.�жϵ�ǰ�ڵ���ҽڵ��Ƿ�Ϊ�գ�����Ϊ����ݹ�ǰ�����
	if (this->right != nullptr) {
		resNode = this->right->infixOrderSearch(no);//�ݹ�ǰ�����
	}
	return resNode;
}


//3.�������
HeroNode* HeroNode::postOrderSearch(int no) {
	//1.�����жϵ�ǰ�ڵ���ӽڵ��ǲ���Ϊ�գ�������ǿգ���ô�ò��õݹ�ķ�ʽ��ծ
	HeroNode* resNode = nullptr;
	if (this->left != nullptr) {
		resNode = this->left->postOrderSearch(no);//�ݹ���в���
	}
	if (resNode != nullptr) {
		return resNode;
	}
	//2.�жϵ�ǰ�ڵ���ҽڵ��Ƿ�Ϊ�գ�����Ϊ����ݹ�ǰ�����
	if (this->right != nullptr) {
		resNode = this->right->postOrderSearch(no);//�ݹ�ǰ�����
	}
	if (resNode != nullptr) {
		return resNode;
	}
	//3.�жϵ�ǰ�ڵ��ǲ�����Ҫ���ҵĽڵ�
	cout << "����������" << endl;
	if (this->no == no) {
		return this;
	}
	return resNode;

}