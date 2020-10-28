#include <iostream>

using namespace std;


void quickSort(int left, int right, int arr[]) {
	//�ݹ�ķ�������
	if (left >= right) {
		return;
	}
	int i, j, base, temp;

	base = arr[left];//ѡȡ����ߵ�����Ϊ��׼����
	i = left;
	j = right;

	while (i < j) {

		//������óɻ���Ҫ���ұ߿�ʼ
		while (arr[j] >= base && i < j) {
			j--;
		}
		while (arr[i] <= base && i < j) {
			i++;
		}

		if (i < j) {
			//����arr[i]��arr[j]
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
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

	int arr[] = { 1,3,2,-5,6,10,-9 };
	quickSort(0, 6, arr);

	for (int i = 0; i < 7; i++) {

		cout << arr[i] << " ";
	}
	return 1;
}