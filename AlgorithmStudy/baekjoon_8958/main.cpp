#include <iostream>
using namespace std;

void OX_quiz(string str, int& score);
int main() {

	int score = 0;
	int num;
	cin >> num;
	int* ary_score = new int[num];
	string str;


	for (int i = 0; i < num; i++) {
		cin >> str;
		OX_quiz(str, score);
		ary_score[i] = score;
	}
	for (int i = 0; i < num; i++) {
		cout << ary_score[i] << endl;
	}
	return 0;

}

void OX_quiz(string str, int& score) {
	int count = 0;
	score = 0;
	if (str.length() <= 2) {
		if (str[0] == 'O') {
			score++;
			if (str[1] == 'O')
				score += 2;
		}
		else {
			if (str[1] == 'O')
				score++;
		}

		return;
	}
	for (int i = 0; i < str.size() - 1; i++) {

		if (str[i] == 'O') {
			count++;
			score += count;
			while (str[i] == str[i + 1]) {
				count++;
				score += count;
				i++;


			}
		}
		else if (i == str.size() - 2) {
			if (str[i + 1] == 'O')
				score += 1;
		}
		count = 0;
	}

}