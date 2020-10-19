#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//����һ��bubble����ĺ���
void bubbleSort(vector<int>& arr) {
	int flag = 0;
	int temp = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				flag = 1;
				swap(arr[j], arr[j + 1]);
			}
		}
		if (flag == 0) { //˵����û�з���������˵���Ѿ����������
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
	vector<int> arr;
	for (int i = 5; i > 0; i--) {
		arr.push_back(i);
	}
	bubbleSort(arr);
}