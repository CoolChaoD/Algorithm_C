#include <iostream>

using namespace std;


void quickSort(int left, int right, int arr[]) {
	//递归的返回条件
	if (left >= right) {
		return;
	}
	int i, j, base, temp;

	base = arr[left];//选取最左边的数作为基准数据
	i = left;
	j = right;

	while (i < j) {

		//左边设置成基数要从右边开始
		while (arr[j] >= base && i < j) {
			j--;
		}
		while (arr[i] <= base && i < j) {
			i++;
		}

		if (i < j) {
			//交换arr[i]与arr[j]
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	//基数归位
	arr[left] = arr[i];
	arr[i] = base;
	//递归
	quickSort(left, i - 1, arr);
	quickSort(j + 1, right, arr);

}

int main() {

	int arr[] = { 1,3,2,-5,6,10,-9 };
	quickSort(0, 6, arr);

	for (int i = 0; i < 7; i++) {

		cout << arr[i] << " ";
	}
	return 1;
}