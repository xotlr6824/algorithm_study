#include <iostream>

using namespace std;
/*
������ 2007�� 1�� 1�� �������̴�. 
�׷��ٸ� 2007�� x�� y���� ���� �����ϱ�?
�̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����.
����� 2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.
*/
int main() {
	int month, day;
	int temp = 0;
	int monthary[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	cin >> month >> day;
	
	for (int i = 0; i < month-1; i++) {
		temp += monthary[i];		
	}
	temp += day;
	switch (temp%7)
	{
	case 1 :
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	case 0:
		cout << "SUN" << endl;
		break;
	default:
		break;
	}
	return 0;

}