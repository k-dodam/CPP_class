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
	cout << "���ʱݰ� : " << safe << endl;
	cout << endl;
}
void bank::use_counter(int _in, int _out) {
	safe += _in;
	safe -= _out;

	cout << "�Ա� : " << _in << endl;
	cout << "��� : " << _out << endl;
	cout << "�ݰ� : " << safe << endl;
	cout << endl;
}

int main() {
	int i, j;
	char a = 'N';
	bank mybank;
	while (true) {
		cout << "�Ա� �ݾ���?" << endl;
		cin >> i;
		cout << "��� �ݾ���?" << endl;
		cin >> j;
		mybank.use_counter(i, j);
		cout << "�����Ͻ÷��� Y�� �Է��ϼ���." << endl;
		cin >> a;
		if (a == 'Y') {
			exit(-1);
		}
	}
}