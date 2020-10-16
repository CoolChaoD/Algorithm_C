#include <iostream>
#include <vector>
using namespace std;


void printMethod(vector<int> arr) {
	for (auto it = arr.begin(); it != arr.end(); it++)
	{

		cout << *it << " ";
	}
	cout << endl;
}

void shellSort1(vector<int> arr) {
	int count = 0;
	for (int gap = arr.size() / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < arr.size(); i++) {
			int insertValue = arr[i];
			int insertIndex = i - gap;
			while (insertIndex >= 0 && insertValue < arr[insertIndex]) {
				arr[insertIndex + gap] = arr[insertIndex];
				insertIndex -= gap;
			}
			arr[insertIndex + gap] = insertValue;

		}
		cout << "第" << ++count << "轮：";
		printMethod(arr);

	}
}



int main() {

	
	vector<int> arr{ 11,10,8,9,1,7,2,3,5,4,6,0 };

	shellSort1(arr);
















	////第一轮
	//for (int i = 5; i < arr.size(); i++) {

	//	int insertValue = arr[i];
	//	int insertIndex = i - 5;
	//	while (insertIndex >= 0 && insertValue < arr[insertIndex]) {
	//		arr[insertIndex + 5] = arr[insertIndex];
	//		insertIndex-=5;
	//	}
	//	arr[insertIndex + 5] = insertValue;
	//	
	//}
	//cout << "第" << 1 << "轮：";
	//printMethod(arr);
	//

	////第二轮
	////开始的数据3,5,1,6,0,8,9,4,7,2
	//for (int i = 2; i < arr.size(); i++) {
	//	int insertValue = arr[i];
	//	int insertIndex = i - 2;
	//	while (insertIndex >= 0 && insertValue < arr[insertIndex]) {
	//		arr[insertIndex + 2] = arr[insertIndex];
	//		insertIndex -= 2;
	//	}
	//	arr[insertIndex + 2] = insertValue;
	//}
	//cout << "第" << 2 << "轮：";
	//printMethod(arr);


	////第三轮一个完全相同的插入排序
	//for (int i = 1; i < arr.size(); i++) {
	//	int insertValue = arr[i];
	//	int insertIndex = i - 1;
	//	while (insertIndex >= 0 && insertValue < arr[insertIndex]) {
	//		arr[insertIndex + 1] = arr[insertIndex];
	//		insertIndex--;
	//	}
	//	arr[insertIndex + 1] = insertValue;
	//}
	//cout << "第" << 2 << "轮：";
	//printMethod(arr);
	
	
	
	return 0;


}




