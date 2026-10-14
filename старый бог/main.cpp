#include <iostream>
#include <Windows.h>
//void f00(int* num)               //|
//								   //|
//{
//	*num += 3;
//}
//int f01(int num)
//{
//	return num += 3;
//}

//void masiv(int* arr, int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		*(arr + i) = rand() % 20;
//	}
//}

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
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	srand(time(NULL));




	int* ptrInt = new int;//создание новой  ячейки
	*ptrInt = 10;// заполнение этой ячейки
	delete ptrInt;// освобождение ячейки от данных
	ptrInt = nullptr;//создает пустую ячейку







	//const int mas = 20;
	//int arr[mas]{ 3 ,1, 3,2,1 ,3 };
	//masiv(arr, mas);
	//for (int i = 0; i < 20; i++)
	//{
	//	std::cout << *(arr + i);
	//}

	
	//const int size = 5;
	//int arr[size]{ 4, 2, 5, 1, 2 };
	//std::cout << *arr << "\n";
	//std::cout << arr[0] << "\n";
	//std::cout << arr << "\n";
	////std::cout << arr + 1 << "\n";
	//std::cout << *(arr + 5) << "\n";


	





























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
	return 0;
}