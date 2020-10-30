/*
  ��ϰð������
*/
#include <iostream>
#include <vector>
#include <algorithm>

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
		if (flag == 0) { //˵��û�з�������
			break;
		}
		else {
			flag = 0;
		}

	}
}


int main() {

	vector<int> arr = { 2,1,3,4,-1,-5,8,7 };
	BubbleSort(arr);
	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}
	return 1;

}