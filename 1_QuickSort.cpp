

//��ϰһ�¿�������

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {
	if (left >= right) {

		return;
	}
	int i, j, base;
	i = left;
	j = right;

	//ȡ����ߵ�����Ϊ��׼��
	base = arr[left];
	while (i < j) {
		//ȡ����ߵ�����Ϊ��׼������ô�ʹ��ұ߿�ʼ����,�ұߵ���Ҫ����base
		while (i < j && arr[j] >= base) {
			j--;
		}
		//��ߵ���ҪС��base
		while (i < j && arr[i] <= base) {
			i++;
		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	//��׼����λ��
	arr[left] = arr[i];
	arr[i] = base;
	quickSort(left, i - 1, arr);             //����ݹ�
	quickSort(j + 1, right, arr);            //���ҵݹ�

}

int main() {

	vector<int> arr = { 1,4,-5,8,9,-10,3 };
	quickSort(0, arr.size() - 1, arr);

	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
}