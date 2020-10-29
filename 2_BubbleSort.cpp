//第二次练习冒泡排序
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void BubbleSort(vector<int>& arr) {

	int flag = 0;

	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				flag = 1;
				swap(arr[j], arr[j + 1]);
			}
		}

		if (flag == 0) { //说明没有发生交换，即已经是按照顺序排好了的
			break;
		}
		else {
			flag = 0;
		}

		cout << i + 1 << ":  ";
		for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;

	}
}


int main() {

	vector<int> arr = { 1,4,-5,8,9,-10,3 };


	BubbleSort(arr);

}
//TEST