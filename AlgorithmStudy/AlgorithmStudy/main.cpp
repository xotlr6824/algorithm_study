#include <iostream>

using namespace std;
/*
오늘은 2007년 1월 1일 월요일이다. 
그렇다면 2007년 x월 y일은 무슨 요일일까?
이를 알아내는 프로그램을 작성하시오.
첫째 줄에 빈 칸을 사이에 두고 x(1≤x≤12)와 y(1≤y≤31)이 주어진다.
참고로 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지, 4, 6, 9, 11월은 30일까지, 2월은 28일까지 있다.
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