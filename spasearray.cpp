#include <iostream>
using namespace std;

//1.打印期盼
void printChess(int a[][11],int nRow) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < 11; j++) {
			
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {
	//1、创建棋盘
	int chessArr[11][11] = {};
	chessArr[1][2] = 1;
	chessArr[2][3] = 2;
	chessArr[4][5] = 2;
	printChess(chessArr, 11);

	//2、创建稀疏数组
	//a.遍历二维数组得到非零数据的个数
	int sum = 0;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (chessArr[i][j] != 0)
				sum++;
		}
	}
	cout << "sum=" << sum << endl;

	
	//b.创建二维稀疏数组
	cout << "稀疏数组" << endl;
	int** sparseArr = new int* [sum+1];
	for (int i = 0; i < (sum + 1); i++) {
		sparseArr[i] = new int[3];
	}
	//稀疏数组赋初值
	for (int i = 0; i < sum + 1; i++) {
		for (int j = 0; j < 3; j++) {
			sparseArr[i][j] = 0;		
		}
	}
	sparseArr[0][0] = 11;
	sparseArr[0][1] = 11;
	sparseArr[0][2] = sum;
	

	//c.遍历原始二维数组将数据取出非零值存放到稀疏数组中
	int count = 0;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (chessArr[i][j] != 0) {
				count++;
				sparseArr[count][0] = i;
				sparseArr[count][1] = j;
				sparseArr[count][2] = chessArr[i][j];

			}

		}
	}
	//输出稀疏数组
	for (int i = 0; i < sum + 1; i++) {
		for (int j = 0; j < 3; j++) {
			cout << sparseArr[i][j] << "  ";
		}
		cout << endl;
	}




	return 0;
}

