// ConsoleApplication1.cpp : main project file.
/*
Implemente una función que permita intercambiar
dos variables de tal forma que la primera variable siempre sea menor que la segunda.*/

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;



void intercambiar(int *a, int *b)
{
	if (*a > *b)
	{
		int *temp;
		temp= a;
		a = b;
		temp=b;
	}
	
		cout << "el valor de x es: " << *b << endl;
		cout << "el valor de y es: " << *a << endl;
	

}



int main()
{
	int x, y;
	int *px, *py;//declaracion de variables punteros que almacenaran direcciones de memoria
	px = &x; py = &y;//asignacion de direcciones de memoria a estas variables

	cout << "ingrese valor : "; cin >> x;
	cout << "ingrese valor : "; cin >> y;
	intercambiar(px, py);
	_getch();
}


//
//#include "stdafx.h"
//#include<iostream>
//#include<conio.h>
//#include<stdlib.h>
//#include<math.h>
//#include<iomanip>
//
//using namespace std;
//using namespace System;
//
//
//
//void intercambiar(int a, int b)
//{
//	if (a > b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	cout << "el valor de x es: " << a << endl;
//	cout << "el valor de y es: " << b << endl;
//
//
//}
//
//
//
//int main()
//{
//	int x, y;
//	cout << "ingrese valor x : "; cin >> x;
//	cout << "ingrese valor y : "; cin >> y;
//	intercambiar(x, y);
//	_getch();
//}