#include <iostream>
using namespace std;

class character {
public:
	character() : hp(100), power(100) {};

protected:
	int hp;
	int power;
};

class player : public character {
public:
	player() {};
};

class monster {
public:
	monster() {};
	void get_damage(int _damage) {};
	void attack(player target_player) {};
	virtual void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
	cout << "�⺻ ���� : ������ -10hp" << endl;
}

class monster_a : public monster, character {
public:
	virtual void attack_special(player target_player);
};

void monster_a::attack_special(player target_player) {
	cout << "���ʱ� ���� : ������ -15hp" << endl;
}

int main() {
	
	player player_1;

	monster_a forest_monster;

	monster& mon = forest_monster;
	monster_a& mon_a = forest_monster;
	cout << "�θ�Ŭ������ ��ĳ���� �� ����" << endl;
	mon.attack_special(player_1);

	cout << "�ڽ�Ŭ������ ����" << endl;
	mon_a.attack_special(player_1);

	cout << endl << "���� �����ڷ� ����" << endl;
	mon_a.monster::attack_special(player_1);

	return 0;
}