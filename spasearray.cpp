#include <iostream>
using namespace std;

//1.��ӡ����
void printChess(int a[][11],int nRow) {
	for (int i = 0; i < nRow; i++) {
		for (int j = 0; j < 11; j++) {
			
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}

int main() {
	//1����������
	int chessArr[11][11] = {};
	chessArr[1][2] = 1;
	chessArr[2][3] = 2;
	chessArr[4][5] = 2;
	printChess(chessArr, 11);

	//2������ϡ������
	//a.������ά����õ��������ݵĸ���
	int sum = 0;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (chessArr[i][j] != 0)
				sum++;
		}
	}
	cout << "sum=" << sum << endl;

	
	//b.������άϡ������
	cout << "ϡ������" << endl;
	int** sparseArr = new int* [sum+1];
	for (int i = 0; i < (sum + 1); i++) {
		sparseArr[i] = new int[3];
	}
	//ϡ�����鸳��ֵ
	for (int i = 0; i < sum + 1; i++) {
		for (int j = 0; j < 3; j++) {
			sparseArr[i][j] = 0;		
		}
	}
	sparseArr[0][0] = 11;
	sparseArr[0][1] = 11;
	sparseArr[0][2] = sum;
	

	//c.����ԭʼ��ά���齫����ȡ������ֵ��ŵ�ϡ��������
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
	//���ϡ������
	for (int i = 0; i < sum + 1; i++) {
		for (int j = 0; j < 3; j++) {
			cout << sparseArr[i][j] << "  ";
		}
		cout << endl;
	}




	return 0;
}

