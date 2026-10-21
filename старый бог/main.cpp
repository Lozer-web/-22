#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include <string>
#include <limits>
	//void f00(int* num)               //|
//								   //|
//{
//	*num += 3;
//}
//int f01(int num)
//{
//	return num += 3;
//}
//-------------------------------------------------------------

	//void masiv(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = rand() % 20;
//	}
//}
//-------------------------------------------------------------

	//void Myswap(int* one, int* two)
//{
//	int slovo_one = *one; // значение первой перменной
//	*one = *two; // первая = второй
//	*two = slovo_one;// вторая = первой
//}
//void Myswap(int& one, int& two)
//{
//	int slovo_one2 = one;
//	one = two;
//	two = slovo_one2;
//}
//-------------------------------------------------------------

	/*void ArrPlus(int*& arr, int& size)
{

	int* temp = new int[size];
	for (int  i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[]arr;
	size += 1;
	arr = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}
	arr[size - 1] = 100;
	delete[] temp;
}
-------------------------------------------------------------
*/

 
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(NULL));
	/*std::string name = "Text";
	std::string name1 = "Даник" + name;
	std::cout << name << "\n";

	for (int i = 0; i < name.size(); i++)
	{
		std::cout << name[i];
	}*/
	/*	std::cout << "Enter:";
	std::string a;
	int b;


	std::getline(std::cin, a);   //(откуда_инфа, куда_положить)
	std::cout << a << std::endl;

	std::cin >> b;
	std::cout << b << std::endl;

	/*std::cin.ignore(32676, '\n');*/  // (очистка буфера     сколько_очистить, до_какого_символа_очищать)

	/*	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  //топовая очистка буфера         || ставиться в том случае если после гетлайна идет интовое значение син например "std::cin >> b;"


	std::getline(std::cin, a, '\n');   //(откуда_инфа, куда_положить, от_какого_символа_читать)
	std::cout << a << std::endl;*/


	/*std::cin >> b;
	std::cout << b << "\n";

	std::cin >> a;
	std::cout << a << "\n";

	std::cin >> b;
	std::cout << b << "\n";*/

	std::cout << "Какая то программа :)\n\n\n";



	std::string login;
	std::string passwrd;

	std::cout << "\tРегистрация:\n";
	while (true)
	{
		std::cout << "Введите логин: ";
		std::getline(std::cin, login, '\n');
		if (login.size() >= 5 || login.size() <= 15)
		{
			while (true)
			{
				std::cout << "Введите пароль: ";
				std::getline(std::cin, passwrd, '\n');
				if (passwrd.size() >= 5 || passwrd.size() <= 15)
				{
					std::cout << "Успешная регистрация!!!!";
					Sleep(2000);
					break;
				}
				else
				{
					std::cout << "Пароль должен содержать от 5 до 15 символов!";
					Sleep(2000);
					system("cls");
				}
			}
			break;
		}
		
		else
		{
			std::cout << "Логин должен содержать от 5 до 15 символов!";
			Sleep(2000);
			system("cls");
		}
	}

	

	//че то не так в коде, надо перепроверить его
























return 0;
}
	/*	int side = 2, row = 4, col1 = 4, col2 = 3;
	int*** ar = new int** [side];       //создание трёхмерного массива
	for (int i = 0; i < side; i++)
	{
		ar[i] = new int* [row];
	}


	for (int i = 0; i < row; i++)
	{
		ar[0][i] = new int[col1];
	}


	ar[1][0] = new int[2];
	for (int i = 0; i < row; i++)
	{
		ar[1][i] = new int[col2];
	}


	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < row; j++)
		{
			delete[] ar[i][j];       // удаление трехмерного массива
		}
		delete[] ar[i];
	}
	delete[] ar;*/


	/*int size = 5;
	int* arr = new int[size] {1, 2, 3, 4, 5};
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	ArrPlus(arr, size)
	-------------------------------------------------------------
	*/


	//int* ptrInt = new int;//создание новой  ячейки
	//*ptrInt = 10;// заполнение этой ячейки
	//delete ptrInt;// освобождение ячейки от данных
	//ptrInt = nullptr;//создает пустую ячейку
	//-------------------------------------------------------------

	/*int size = 0;
	std::cin >> size; //динамические массивы с указателем
	int* name = nullptr;
	int* name = new int[size];
	name[1] = 10;
	delete[] name;
	-------------------------------------------------------------
	*/

	/*int row = 3, col = 4;

	int** arr = new int* [row];//переменная хранит информацию другой переменной(указатель на указатель)
	for (int i = 0; i < row; i++)
	{
		std::cin >> col;//спрашивает каждый раз сколько места
		arr[i] = new int[col];
	}
	arr[1][2] = 10; //вторая ячейка от нуля, третья ячейка от нуля в ячейке которая вторая от нуля

	for (int i = 0; i < row; i++) 
	{
		delete[] arr[i];      //удаление двухмерного массива
	}
	delete[] arr;
	*/
	//     /\ удаляем двухмерный массив
	//const int mas = 20;
	//int arr[mas]{ 3 ,1, 3,2,1 ,3 };
	//masiv(arr, mas);
	//for (int i = 0; i < 20; i++)
	//{
	//	std::cout << *(arr + i);
	//}
	//-------------------------------------------------------------

	
	//const int size = 5;
	//int arr[size]{ 4, 2, 5, 1, 2 };
	//std::cout << *arr << "\n";
	//std::cout << arr[0] << "\n";
	//std::cout << arr << "\n";
	////std::cout << arr + 1 << "\n";
	//std::cout << *(arr + 5) << "\n";
	//-------------------------------------------------------------


	//int one = 5, two = 10;




	//std::cout << one << " " << two << "\n";// пишем как обычно
	////std::swap(one, two);
	//Myswap(&one, &two);//меняем местами значения
	//std::cout << one << " " << two << "\n";//пишем свапнутый результат

	//int a = 5;



	//std::cout << a << "\n";		//|
	//a = f01(a);				    //|
	//std::cout << a << "\n";	   // <
	//f00(&a);
	//std::cout << a << "\n";



	//int* ptr = &a; // хранит адрес переменной с помощью &(амперсанда)



	//std::cout << a << "\n"; // переменная
	////std::cout << &a << "\n";//адрес переменной
	//std::cout << ptr << "\n";//получатель
	////std::cout << &ptr << "\n";//адрес получателя
	//ptr = &b;
	//std::cout << *ptr << "\n";//пишет значение переменной