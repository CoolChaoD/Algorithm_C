

//练习一下快速排序

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

	//取最左边的数作为基准数
	base = arr[left];
	while (i < j) {
		//取最左边的数作为基准数，那么就从右边开始遍历,右边得数要大于base
		while (i < j && arr[j] >= base) {
			j--;
		}
		//左边的数要小于base
		while (i < j && arr[i] <= base) {
			i++;
		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}
	}
	//基准数归位置
	arr[left] = arr[i];
	arr[i] = base;
	quickSort(left, i - 1, arr);             //向左递归
	quickSort(j + 1, right, arr);            //向右递归

}

int main() {

	vector<int> arr = { 1,4,-5,8,9,-10,3 };
	quickSort(0, arr.size() - 1, arr);

	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
}