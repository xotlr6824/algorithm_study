#include <iostream>
#include <string>
using namespace std;

void wordcheck(string str, int& count);
//1316번 그룹단어
int main() {
	int num;
	int count = 0;
	string str;
	cin >> num; // 단어 개수 입력
	for (int i = 0; i < num; i++) {
		cin >> str;
		wordcheck(str, count);

	}
	cout << count << endl;

	return 0;
}
void wordcheck(string str, int& count) {
	if (str.length() <= 2) {
		count++;

		return;
	}
	for (int i = 0; i < str.length() - 2; i++) {
		if (str[i] != str[i + 1]) {

			for (int j = i + 2; j < str.length(); j++) {

				if (str[i] == str[j]) {
					return;
				}

			}
		}
	}

	count++;
}