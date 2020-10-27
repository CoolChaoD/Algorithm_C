#include <iostream>
#include <vector>

using namespace std;

//���������С����
void quickSort(int left, int right, vector<int>& arr) {
	if (left >= right) {   //�ݹ��㷨���˳�����
		return;
	}
	int i, j, base, temp;

	i = left;
	j = right;
	base = arr[left]; //ѡȡ����ߵ�����Ϊ����
	while (i < j) {

		while (arr[j] >= base && i < j) {
			j--;
		}
		while (arr[i] <= base && i < j) {
			i++;
		}
		if (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//��׼����λ
	arr[left] = arr[i];
	arr[i] = base;
	quickSort(left, i - 1, arr); //����ݹ�
	quickSort(i + 1, right, arr); //���ҵݹ�

}


//test
int main() {

	vector<int> arr = { 2,4,-1,5,6,7,-9 };
	quickSort(0, arr.size() - 1, arr);

	for (vector<int>::iterator i = arr.begin(); i != arr.end(); i++) {
		cout << *i << " ";
	}

}