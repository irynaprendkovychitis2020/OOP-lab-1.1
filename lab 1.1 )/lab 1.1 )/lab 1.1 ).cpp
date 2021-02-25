﻿// lab 1.1 ).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Number.h"

using namespace std;

Number makeNumber(int x, double y)
{
	Number nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to double (second)" << endl;
	return nn;
}
int main()
{
	Number n;
	n.Init(10, 10);
	n.Display();
	n.multiply(5);
	n.Display();
	Number k;
	k.Read();
	k.Display();
	k.multiply(2.5);
	k.Display();
	Number i;
	int a, b;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	i = makeNumber(a, b);
	i.Display();
	return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.