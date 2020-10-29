//第二次练习冒泡排序
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void BubbleSort(vector<int>& arr) {

	//arr的长度

	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; i < arr.size() - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}

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