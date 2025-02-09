#include <iostream>
#include <string>

using namespace std;

int call_function(int aa);

int global_variable = 444;

struct person {
	string name;
	int age;
	int weight;
};

int get_new_id() {
	int id = 0;
	return++id;
}
int main(void) {

	try {
		int input;
		cout << "정수를 하나 입력하세요" << endl;
		cin >> input;

		if (input > 0) {
			cout << "throw 1" << endl;
			throw 1;
			cout << "after throw 1" << endl;
		}

		if (input < 0) {
			cout << "throw -1.0f" << endl;
			throw - 1.0f;
			cout << "after throw -1.0f" << endl;
		}
		if (input == 0) {
			cout << "throw 2" << endl;
			throw 'Z';
			cout << "after throw Z" << endl;
		}
	}
	catch (int a) {
		cout << "catch " << a << endl;
	}
	catch (float b) {
		cout << "catch " << b << endl;
	}
	catch (char c) {
		cout << "catch " << c << endl;
	}
	catch (...) {
		cout << "catch all" << endl;
	}

	int input_number;
	cout << "1 ~ 5 정수 입력 : ";
	cin >> input_number;
	switch (input_number) {
	case 1:
		cout << "입력한 수는 1 입니다." << endl;
		break;
	case 2:
		cout << "입력한 수는 2 입니다." << endl;
		break;
	case 3:
		cout << "입력한 수는 3 입니다." << endl;
		break;
	case 4:
		cout << "입력한 수는 4 입니다." << endl;
		break;
	case 5:
		cout << "입력한 수는 1 입니다." << endl;
		break;
	default:
		cout << "입력한 수가 범위에 맞지 않습니다." << endl;

	}
	cout << endl;

	cout << "id : " << get_new_id() << endl;
	cout << "id : " << get_new_id() << endl;
	cout << "id : " << get_new_id() << endl;
	cout << "id : " << get_new_id() << endl;
	cout << "id : " << get_new_id() << endl;
	cout << "id : " << get_new_id() << endl;
	cout << endl;

	person adult[2];

	adult[0].name = "brain";
	adult[0].age = 20;
	adult[0].weight = 60;

	adult[1].name = "Kim";
	adult[1].age = 30;
	adult[1].weight = 70;

	for (int a = 0; a < 2; a++) {
		cout << a << " person name : " << adult[a].name << endl;
		cout << a << " person age : " << adult[a].age << endl;
		cout << a << " person weight : " << adult[a].weight << endl;
	}

	int customer_num;
	cout << "오늘의 방문 손님 수 : ";
	cin >> customer_num;
	string* bread = new string[customer_num];

	for (int f = 0; f < customer_num; f++) {
		bread[f] = to_string(f) + "번째 빵";
	}
	cout << endl << "생산되는 빵은 몇 개 일까요?" << endl;

	for (int s = 1; s < customer_num; s++) {
		cout << *(bread + s) << endl;
	}
	delete[] bread;
	cout << endl;


	int aa = call_function(77);
	cout << "여기는 main 함수 내입니다 : " << aa << endl;
	cout << endl;

	cout << "short : " << sizeof(short) << " bytes" << endl;
	cout << "unsigned short : " << sizeof(unsigned short) << " bytes" << endl;
	cout << "int : " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << endl;
	cout << "__int8 : " << sizeof(__int8) << " bytes" << endl;
	cout << "__int16 : " << sizeof(__int16) << " bytes" << endl;
	cout << "__int32 : " << sizeof(__int32) << " bytes" << endl;
	cout << "__int64 : " << sizeof(__int64) << " bytes" << endl;
	cout << "long : " << sizeof(long) << " bytes" << endl;
	cout << "unsigned long : " << sizeof(unsigned long) << " bytes" << endl;
	cout << "long long : " << sizeof(long long) << " bytes" << endl;
	cout << "unsigned long long : " << sizeof(unsigned long long) << " bytes" << endl;
	cout << endl;

	bool value1, value2;
	char k, l;
	float m, n;
	int i, j;

	value1 = true;
	cout << "true = " << value1 << endl;
	value2 = false;
	cout << "false = " << value2 << endl;
	cout << endl;

	k = 'A', l = 'K';
	cout << "k = " << k << endl;
	cout << "l = " << l << endl;
	cout << endl;

	m = 1.90, n = 0.001;
	cout << "m = " << m << endl;
	cout << "n = " << n << endl;
	cout << endl;

	int lotto[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	cout << "today's lotto : " << lotto[1] << "," << lotto[3] << "," << lotto[5] << "," << lotto[7] << endl;
	cout << endl;

	for (int g = 0; g < 20; g++) {
		cout << "lotto[" << g << "] = " << lotto[g] << endl;
	}
	cout << endl;

	cout << "Enter Num_1 : ";
	cin >> i;
	cout << "Enter Num_2 : ";
	cin >> j;

	cout << "num_1 + num_2 = " << i + j << std::endl;
	cout << "num_1 - num_2 = " << i - j << std::endl;
	cout << "num_1 * num_2 = " << i * j << std::endl;
	cout << "num_1 / num_2 = " << i / j << std::endl;
	cout << "num_1 % num_2 = " << i % j << std::endl;
	cout << endl;

	int for_i1, for_i2, sum = 0;

	if (i > j) {
		cout << i << " > " << j << endl;
		cout << endl;
	}
	else if (i == j) {
		cout << i << " == " << j << endl;
		cout << endl;
	}
	else {
		cout << i << " < " << j << endl;
		cout << endl;
		for (for_i1 = i; for_i1 < j; for_i1++) {
			sum = sum + for_i1;
		}
		for_i2 = i;
		while (for_i2 < j) {
			for_i2++;
		}
		cout << i << " 에서 " << j << "까지 모든 값의 합 = " << sum << endl;
		cout << endl;
		cout << "for_i2 = " << for_i2 << endl;
		cout << endl;
	}
	cout << endl;


	char char_value = 'A';
	int int_value = 123;
	double double_value = 123.456;

	char* char_pointer_value = &char_value;
	int* int_pointer_value = &int_value;
	double* double_pointer_value = &double_value;

	cout << "char_value : " << char_value << endl;
	cout << "int_value : " << int_value << endl;
	cout << "double_value : " << double_value << endl;
	cout << endl;

	cout << "*char_pointer_value : " << *char_pointer_value << endl;
	cout << "*int_pointer_value : " << *int_pointer_value << endl;
	cout << "*double_pointer_value : " << *double_pointer_value << endl;
	cout << endl;

	*char_pointer_value = 'Z';
	*int_pointer_value = 321;
	*double_pointer_value = 654.321;

	cout << "char_value = " << char_value << endl;
	cout << "int_value = " << int_value << endl;
	cout << "double_value = " << double_value << endl;
	cout << endl;

	return 0;
}

int call_function(int aa) {
	cout << "여기는 call_function 함수 내입니다 : " << global_variable << endl;

	return 99;
}