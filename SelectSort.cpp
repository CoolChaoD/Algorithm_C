/*
  选择排序
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void selectSort(vector<int>& arr) {
	//选择排序双层循环
	for (int i = 0; i < arr.size() - 1; i++) {
		int minIndex = i; //将序列的第一个作为最小的标签
		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] < arr[minIndex])
				minIndex = j;   //将最小值的下标更换为已经找到的下标
		}
		if (minIndex != i) {

			swap(arr[i], arr[minIndex]);
		}
	}
	cout << "after sort" << endl;
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}


int main() {
	vector<int> arr = { 2,4,3,-2,10,9 };
	cout << "before sort：" << endl;
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	selectSort(arr);
	return 0;
}
