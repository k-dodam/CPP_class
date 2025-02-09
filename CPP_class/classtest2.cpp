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
	void get_damager(int _damage) {};
	void attack(player target_player) {};
	void attack_special(player target_player);
};

void monster::attack_special(player target_player) {
	cout << "기본 공격 : 데미지 -10hp" << endl;
}

class monster_a : public monster, character {
public:
	void attack_special(player target_player);
};

void monster_a::attack_special(player target_player) {
	cout << "인탱글 공격 : 데미지 -15hp" << endl;
}

class monster_b : public monster, character {
public:
	void attack_special(player target_player);
};

void monster_b::attack_special(player target_player) {
	cout << "가상 공격 : 데미지 -0hp" << endl;
}

class monster_c : public monster, character {
public:
	void attack_special(player target_player);
};

void monster_c::attack_special(player target_player) {
	cout << "강력 뇌전 공격 : 데미지 -100hp" << endl;
}

int main() {

	player player_1;

	monster_a forest_monster;
	monster_b tutorial_monster;
	monster_c boss_monster;

	monster& mon_a = forest_monster;
	monster& mon_b = tutorial_monster;
	monster& mon_c = boss_monster;

	cout << "부모클래스 참조 공격" << endl;
	mon_a.attack_special(player_1);
	mon_b.attack_special(player_1);
	mon_c.attack_special(player_1);

	cout << "오버라이딩 공격" << endl;
	forest_monster.attack_special(player_1);
	tutorial_monster.attack_special(player_1);
	boss_monster.attack_special(player_1);

	cout << endl << "기본(monster 클래스) 공격" << endl;
	forest_monster.monster::attack_special(player_1);
	tutorial_monster.monster::attack_special(player_1);
	boss_monster.monster::attack_special(player_1);

	return 0;
}