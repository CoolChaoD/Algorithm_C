#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void quickSort(int left, int right, vector<int>& arr) {


	//1.第一个注意点，递归的返回条件
	if (left >= right) {
		return;
	}
	int base, i, j;
	base = arr[left];//选取最左边的作为基准数
	i = left;
	j = right;


	while (i < j) {
		//第二个注意点，以左边为基准数，那么就从右边开始
		while (i < j && arr[j] >= base) {
			j--;
		}
		while (i < j && arr[i] <= base) {
			i++;

		}
		if (i < j) {
			swap(arr[i], arr[j]);
		}


		//基数归位
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