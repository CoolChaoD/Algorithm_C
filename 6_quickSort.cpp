/*
* 第六次练习快速排序
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {
	//递归退出的条件
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int base = arr[i]; //选取最左边的数作为基准数
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

	//基数归位
	arr[left] = arr[i];
	arr[i] = base;
	//递归
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