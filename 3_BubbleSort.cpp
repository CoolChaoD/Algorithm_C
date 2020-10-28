//µÚÈı´ÎÁ·Ï°Ã°ÅİÅÅĞò
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int>& arr) {

	for (int i = 0; i < arr.size() - 1; i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(arr[j], arr[j + 1]);

			}
		}
	}

}

int main() {

	vector<int> arr = { 4,2,6,-1,1,3,9,7,8,10 };

	bubbleSort(arr);

	for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++) {
		cout << *it << " ";
	}

}
