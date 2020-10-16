#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//第三次修改
//第四次修改
//第五次修改
//第六次修改
void bubbleSort(vector<int>& num) {
	int len = num.size();

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (num[j] > num[j + 1])
				swap(num[j], num[j + 1]);
		}
		printf("测试", (i + 1));
		for (vector<int>::iterator it = num.begin(); it != num.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;

	}
}


int main()
{
	vector<int> v;
	for (int i = 5; i > 0; i--)
	{
		v.push_back(i);
	}

	bubbleSort(v);


}
