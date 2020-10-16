//选择排序
#include <iostream>
using namespace std;

void printMethod(int* a) {
	for (int i = 0; i < 4; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
void selectSort(int* a) {
	for (int i = 0; i < 3; i++) {
		int minIdex = i;
		int min = a[minIdex];
		for (int j = i + 1; j < 4; j++) {
			if (min > a [j]) {
				minIdex = j;
				min = a[j];
			}
		}
		if (minIdex != i) {
			a[minIdex] = a[i];
			a[i] = min;
		}
		printMethod(a);
	}
}



int  main() { 

	int a[] = { 3,4,2,1 }; //原始数组
	selectSort(a);

	return 0;





	////第一轮
	//int minIdex = 0;
	//int min = a[0];
	//for (int j = 0+1; j < 4; j++) {
	//	if (min > a[j]){
	//		minIdex = j;
	//		min = a[j];
	//	}

	//}
	//if (minIdex != 0) {
	//	a[minIdex] = a[0];
	//	a[0] = min;
	//
	//}
	//printMethod(a);

	////第二轮
	//minIdex = 1;
	//min = a[1];
	//for (int j = 1 + 1; j < 4; j++) {
	//	if (min > a[j]) {
	//		minIdex = j;
	//		min = a[j];
	//	}

	//}
	//if (minIdex != 1) {
	//	a[minIdex] = a[1];
	//	a[1] = min;

	//}
	//printMethod(a);

	////第三轮
	//minIdex = 2;
	//min = a[2];
	//for (int j = 3 + 1; j < 4; j++) {
	//	if (min > a[j]) {
	//		minIdex = j;
	//		min = a[j];
	//	}

	//}
	//if (minIdex != 3) {
	//	a[minIdex] = a[3];
	//	a[3] = min;

	//}
	//printMethod(a);

	

}