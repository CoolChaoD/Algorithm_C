/*
  ѡ������
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void selectSort(vector<int>& arr) {
	//ѡ������˫��ѭ��
	for (int i = 0; i < arr.size() - 1; i++) {
		int minIndex = i; //�����еĵ�һ����Ϊ��С�ı�ǩ
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] < arr[minIndex])
				minIndex = j;   //����Сֵ���±����Ϊ�Ѿ��ҵ����±�
		}
		if (minIndex != i) {

			swap(arr[i], arr[minIndex]);
		}
	}
	cout << "after sort" << endl;
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


int main() {
	vector<int> arr = { 2,4,3,-2,10,9 };
	cout << "before sort��" << endl;
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	selectSort(arr);
	return 0;
}
