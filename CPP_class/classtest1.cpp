#include <iostream>
using namespace std;

class bank {
private:
	int safe;

public:
	bank();
	void use_counter(int _in, int _out);
};
bank::bank() {
	safe = 1000;
	cout << "최초금고 : " << safe << endl;
	cout << endl;
}
void bank::use_counter(int _in, int _out) {
	safe += _in;
	safe -= _out;

	cout << "입금 : " << _in << endl;
	cout << "출금 : " << _out << endl;
	cout << "금고 : " << safe << endl;
	cout << endl;
}

int main() {
	int i, j;
	char a = 'N';
	bank mybank;
	while (true) {
		cout << "입금 금액은?" << endl;
		cin >> i;
		cout << "출금 금액은?" << endl;
		cin >> j;
		mybank.use_counter(i, j);
		cout << "종료하시려면 Y를 입력하세요." << endl;
		cin >> a;
		if (a == 'Y') {
			exit(-1);
		}
	}
}