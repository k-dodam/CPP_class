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
	void attack_special(player target_player);
};
void monster::attack_special(player target_player) {
	cout << "기본 공격 : 데미지 -10hp" << endl;
}
class monster_a : public monster, character {
public:
	monster_a() {
		cout << "monster_a 클래스 생성자" << endl;
	}
	monster_a(int x, int y) : location{ x, y } {
		cout << "monster_a 클래스 생성자(매개변수 추가)" << endl;
	}
	void show_location() {
		cout << "위치(" << location[0] << ", " << location[1] << ")" << endl;
	}
private:
	int location[2];
};

int main() {

	monster_a forest_monster;
	forest_monster.show_location();
	monster_a wood_monster(15, 24);
	wood_monster.show_location();

	return 0;
}