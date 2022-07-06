#include <iostream>
#include <string>

class Counter {
private:
	int i;

public:

	int work_i;

	Counter(int i) {
		this->i = i;
		this->work_i = i;
	}
	Counter() {
		i = 1;
		work_i = i;
	}

	void increase(int &i) {
		this->i = ++i;
	}

	void reduce(int &i) {
		this->i = --i;
	}

	void show_counter(int i) {
		this->i = i;
		std::cout << this->i << std::endl;
	}
};

int main(int argc, char** argv) {

	system("chcp 1251");

	Counter count;

	std::string answer;

	do {
		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		(std::cin >> answer).get();

		if (answer != "��" && answer != "���") {
			std::cout << "������������ ���������!" << std::endl;
		}

	} while (answer != "��" && answer != "���");


	if (answer == "��") {
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> count.work_i;
	}

	do {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		
		(std::cin >> answer).get();
		
		if (answer == "+") {
			count.increase(count.work_i);
		}
		else if (answer == "-") {
			count.reduce(count.work_i);
		}
		else if (answer == "=") {
			count.show_counter(count.work_i);
		}
		else if (answer == "x") {
			std::cout << "�� ��������!" << std::endl;
		}
		else {
			std::cout << "������������ ���� ��������!" << std::endl;
			if (answer == "�") { std::cout << "������� �������� 'x' � ENG ���������" << std::endl; }
		}

	} while (!(answer == "x"));

	return 0;
}