/*
  �����α�дð������
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& arr) {

	int flag = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {  //��С���������
				flag = 1; //��������˽�������ô��־�ͱ��1
				swap(arr[j], arr[j + 1]);
			}
		}
		//�����һ��ѭ��û�з���������ô��˵���Ѿ������������˿�������ѭ��
		if (flag == 0) {
			break;
		}
		else {
			flag = 0;
		}

	}

}


int main() {

	vector<int> arr = { 2,1,6,5,4,0,-1,9 };
	bubbleSort(arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}
