#include <iostream>
#include <vector>

using namespace std;

//快速排序从小到大
void quickSort(int left, int right, vector<int>& arr) {
	if (left >= right) {   //递归算法的退出条件
		return;
	}
	int i, j, base, temp;

	i = left;
	j = right;
	base = arr[left]; //选取最左边的数作为基数
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
	//基准数归位
	arr[left] = arr[i];
	arr[i] = base;
	quickSort(left, i - 1, arr); //向左递归
	quickSort(i + 1, right, arr); //向右递归

}


//test
int main() {

	vector<int> arr = { 2,4,-1,5,6,7,-9 };
	quickSort(0, arr.size() - 1, arr);

	for (vector<int>::iterator i = arr.begin(); i != arr.end(); i++) {
		cout << *i << " ";
	}

}