#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//12345
void bubbleSort(vector<int> &num){
	int len = num.size();

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (num[j] > num[j + 1])
				swap(num[j], num[j + 1]);
		}
		printf("µÚ%dÂÖ",(i + 1));
		for (vector<int>::iterator it = num.begin(); it != num.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;

	}
}


//test




int main()
{
	vector<int> v;
	for (int i = 5; i > 0; i--)
	{
		v.push_back(i);
	}

	bubbleSort(v);


}
