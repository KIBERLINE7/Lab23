#include <iostream>
#include <string>

using namespace std;

void zd1() {

	char c;
	cout << "Enter symbol C : ";
	cin >> c;
	
	cout << "Previous : " << char(int(c) - 1) << " Next : " << char(int(c) + 1) << endl;

	return;
}

void zd2() {

	string s;
	string t;

	cout << "Enter string s : ";
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		t = t + s[i] + " ";
	}

	cout << "New string s : " << t;

	return;
}

void zd3() {

	int cnt = 0;
	string s;

	cout << "Enter string s : ";

	cin >> s;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] >= 'a' && s[i] <= 'z')
			cnt++;

	}

	cout << "Count : " << cnt << "\n";

}

void zd4() {

	char c;
	string s;
	string ans;

	cout << "Enter c : ";
	cin >> c;

	cout << "Enter s : ";
	cin >> s;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == c) {

			ans = ans + s[i] + s[i];

		}
		else {

			ans = ans + s[i];

		}

	}

	cout << "New string s : " << ans;
	return;
}

void zd5() {

	string s;
	string s0;

	cout << "Enter string s : ";
	cin >> s;

	cout << "Enter string s0 : ";
	cin >> s0;

	int cnt = 0 , ind0 , ind;

	for (int i = 0; i < s.size(); i++) {

		if (s[i] == s0[0]) {
			ind0 = 0;
			ind = i;
			while (s[ind] == s0[ind0]) {

				ind0++;
				ind++;

			}

			if (ind0 == s0.size()) {

				cnt++;

			}

		}

	}

	cout << "Count : " << cnt;
	return;
}

int main() {

	int t;

	while (true) {

		cout << "Enter number job or 0 for exit : ";
		cin >> t;

		switch (t)
		{
		case 1: {
			zd1();
			break;
		}
		case 2: {
			zd2();
			break;
		}
		case 3: {
			zd3();
			break;
		}
		case 4: {
			zd4();
			break;
		}
		case 5: {
			zd5();
			break;
		}
		case 0: {
			cout << "Exit";
			return 0;
		}

		default:
			break;
		}

	}

	return 0;

}