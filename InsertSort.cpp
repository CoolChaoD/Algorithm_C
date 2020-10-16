#include <iostream>
using namespace std;



void printMethod(int* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}


void insertSort(int *arr,int n) {
	for (int i = 1; i < n; i++) {

		int insertValue = arr[i];
		int insertIndex = i-1;

		while (insertIndex >= 0 && insertValue<arr[insertIndex]) {
			arr[insertIndex + 1] = arr[insertIndex];
			insertIndex--;
		}
		arr[insertIndex + 1] = insertValue;
		cout << "µÚ" << i << "ÂÖ£º";
		printMethod(arr, 4);
	}
}




int main() {
	int arr[] = { 4,3,2,1 };
	insertSort(arr, 4);

	return 0;
}