#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {


	//1.��һ��ע��㣬�ݹ�ķ�������
	if (left >= right) {
		return;
	}
	int base, i, j;
	base = arr[left];//ѡȡ����ߵ���Ϊ��׼��
	i = left;
	j = right;


	while (i < j) {
		//�ڶ���ע��㣬�����Ϊ��׼������ô�ʹ��ұ߿�ʼ
		while (i < j && arr[j] >= base) {
			j--;
		}
		while (i < j && arr[i] <= base) {
			i++;

		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}


		//������λ
		arr[left] = arr[i];
		arr[i] = base;

		quickSort(left, i - 1, arr);
		quickSort(j + 1, right, arr);
	}


}

int main() {
	vector<int> arr = { 5,2,3,-7,6 };
	quickSort(0, arr.size() - 1, arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
}