#include <iostream>
using namespace std;

class monster {
public:
	monster();
	~monster();

private:
	int* dummy;
};

monster::monster() {
	cout << "mmonster() ������ ȣ��" << endl;
	dummy = new int;
}

monster::~monster() {
	cout << "~monster() �Ҹ��� ȣ��" << endl;
	delete dummy;
}

class monster_a : public monster {
public:
	monster_a();
	~monster_a();

private:
	int* dummy_a;
};

monster_a::monster_a() {
	cout << "monster_a() ������ ȣ��" << endl;
	dummy_a = new int;
}
monster_a::~monster_a() {
	cout << "~monster_a() �Ҹ��� ȣ��" << endl;
}

int main() {
	monster_a* mon = new monster_a();
	delete mon;
	return 0;
}