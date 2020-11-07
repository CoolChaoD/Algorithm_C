/*
* ��������ϰ��������
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {
	//�ݹ��˳�������
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int base = arr[i]; //ѡȡ����ߵ�����Ϊ��׼��
	while (i < j) {
		if (arr[j] >= base && i < j) {
			j--;
		}
		if (arr[i] <= base && i < j) {
			i++;
		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}

	//������λ
	arr[left] = arr[i];
	arr[i] = base;
	//�ݹ�
	quickSort(left, i - 1, arr);
	quickSort(j + 1, right, arr);
}

int main() {

	vector<int> arr = { 5,4,2,3,-1,9,10,111 };
	quickSort(0, arr.size() - 1, arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	return 0;
}