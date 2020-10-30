/*
 第五次练习快速排序
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {
	//递归的返回条件
	if (left >= right) {
		return;
	}

	int i, j, base;
	i = left;
	j = right;
	base = arr[left];//选取最左边的数作为基准数

	while (i < j) {
		//基准数在左边因此先从右边开始
		while (i < j && arr[j] >= base) {
			j--;
		}
		while (i < j && arr[i] <= base) {
			i++;
		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}

	}
	//基数归位
	arr[left] = arr[i];
	arr[i] = base;
	//向左递归
	quickSort(left, i - 1, arr);
	//向右递归
	quickSort(j + 1, right, arr);
}

int main() {

	vector<int> arr = { 2,1,5,3,4,6,7,-3,-5,-9 };
	quickSort(0, arr.size() - 1, arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}

	return 1;
}


