/*
  第六次编写冒泡排序
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int>& arr) {

	int flag = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {  //从小到大的排序
				flag = 1; //如果发生了交换，那么标志就变成1
				swap(arr[j], arr[j + 1]);
			}
		}
		//如果有一次循环没有发生交换那么就说明已经是有序的了因此可以跳出循环
		if (flag == 0) {
			break;
		}
		else {
			flag = 0;
		}

	}

}


int main() {

	vector<int> arr = { 2,1,6,5,4,0,-1,9 };
	bubbleSort(arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}
