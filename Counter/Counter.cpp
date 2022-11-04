#include <iostream>
#include <Windows.h>

using namespace std;

class Counter
{
private:
	int num;
public:
	int get_num()
	{
		return num;
	}

	void set_num(int num)
	{
		this->num = num;
	}


	void do_something(string symbol)
	{
		if (symbol == "+")
		{
			num++;
		}
		if (symbol == "-")
		{
			num--;
		}
		if (symbol == "=")
		{
			cout << num << endl;
		}
	}

	Counter()
	{
		num = 1;
	}

	Counter(int num)
	{
		this->num = num;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Counter count;
	string answer;
	cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	cin >> answer;

	if (answer == "да")
	{
		cout << "Введите начальное значение счётчика: ";
		int num;
		cin >> num;
		count.set_num(num);
	}

	while (answer != "x")
	{
		cout << "Введите команду ('+', '-', '=' или 'x'): ";
		cin >> answer;
		if (answer != "x") 
		{
			count.do_something(answer);
		}
	}
	cout << "До свидания!";
}