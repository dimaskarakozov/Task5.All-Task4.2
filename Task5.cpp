// Task5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
int qwe(int q) {
	for (int i = 0; i < q; i++) {
		printf("*");
	}
	printf("\n");
	return 0;
}
int asd(int q, int e) {
	
	if (q > 2 * e) {
		for (int i = 0; i < e; i++) {
			printf("*");
		}
		for (int i = 0; i < q - 2 * e; i++) {
			printf(" ");
		}
		for (int i = 0; i < e; i++) {
			printf("*");
		}
	}
	else {
		for (int i = 0; i < q; i++) {
			printf("*");
		}
	}
	

	
	printf("\n");
	return 0;
}
int function2(int q, int w, int e) {
	if (w > 2 * e) {
		for (int i = 0; i < e; i++) {
			qwe(q);
		}
		for (int i = 0; i < w - e - e; i++) {
			asd(q, e);
		}
		for (int i = 0; i < e; i++) {
			qwe(q);
		}
	}
	else {
		for (int i = 0; i < w; i++) {
			qwe(q);
		}
	}
		
	
	
	return 0;
}
void zadanye42() { //2 прога
	int q, w, e;
	printf("\nВведите ширину поля ");
	scanf_s("%d", &q);
	printf("\nВведите высоту поля ");
	scanf_s("%d", &w);
	printf("\nВведите глубину поля ");
	scanf_s("%d", &e);
	printf("\n\n");



	function2(q, w, e);

}
int zadanye1(int &w,int &n) {

	if (w / 10 != 0) {
		n = n + (w  % 10);
		w = w / 10;
		zadanye1(w, n);
	}


	
	return n + w;

}

int 	zadanye2(int a,int *b,int *c) {
	if (*b != 1)
	{
		*c = a * *c;
		*b = *b - 1;
		zadanye2(a, &*b, &*c);
	}

	return *c;
}

int 	zadanye3(int a, int max) {
	if (a/10 != 0)
	{
		if (a % 10 >max) {
			max = a % 10;
		}
		a= a / 10;
	//	printf("\nОтвет: %d", max);
		zadanye3(a, max);
	}
	else {
		if (a%10  > max) {
			max = a % 10;
		}
		
		return max;
	}


}
void  func4(int n) {

	if (n != 0) {
		printf("%d", n % 10);
		n = n / 10;
		func4(n);

	}

}
void 	zadanye4() {
	int n;
	printf("Введите число: ");
	scanf_s("%d",&n);
	func4(n);

		
	

}
void func5(int* n, int* sum) {

	if (*n != -1) {
		printf("Введите число: ");
		scanf_s("%d", &*n);
		*sum = *sum + *n;
		func5(&*n,&*sum);
	}
}
int 	zadanye5() {
	int n=0;
	int sum = 0;
	func5(&n, &sum);

	return sum + 1;
}

void prost(int num, int *n) {

	if (num % *n == 0 && *n!=1) {
		printf("Составное");
	}
	else if (sqrt(num) < *n) {
		printf("Простое");
	}
	else {
		*n = *n + 1;
		prost(num, n);
	}

}
void 	zadanye6() {
	int num, n=1;
	printf("Введите число:");
	scanf_s("%d", &num);

	prost(num,&n);
}
int sumn(int a,int sum) {
	
	if (a > 0) {
		sum = sum + a % 10;
		a=a / 10;
		sumn(a, sum);
	}
	else {
		return sum;
	}
}
void 	zadanye7() {
	int a, b, sum = 0;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);

	//printf("%d", sum);//доп проверочка:)
	if (sumn(a, sum) == b) {
		printf(" _DA_");
	}
	else { 
		printf(" _NET_"); 
	}


}

int main()
{
	
		setlocale(LC_ALL, "Rus");
	int q=-1;

	printf("\n\n1) (1) - Дано натуральное число N. Вычислите сумму его цифр. При решении этой задачи нельзя использовать циклы и массивы. Разрешена только рекурсия и целочисленная арифметика.");
	printf("\n\n2) (1) - Рекурсивно описать функцию pow(x,n), вычисляющую xn для любого вещественного x (≠0) и любого целого n.");
	printf("\n\n3) (2) Рекурсивно описать функцию maxdig(N), которая находит наибольшую цифру в десятичной записи неотрицательного целого числа N. Например, maxdig(27306) = 7");
	printf("\n\n4) (2) Рекурсивно описать функцию RevPrint(N), которая печатает в обратном порядке цифры десятичной записи целого неотрицательного числа N. Например, RevPrint(12345) должна вывести текст 54321");
	printf("\n\n5) (2) Дана последовательность чисел, завершающаяся числом -1. Найдите сумму всех этих чисел, не используя цикл. (само число -1 в последовательность не входит, а служит как признак ее окончания).");
	printf("\n\n6) (2) Дано натуральное число n>1. Проверьте, является ли оно простым. Программа должна вывести слово YES, если число простое и NO, если число составное. Алгоритм должен иметь сложность O(sqrt(n)).");
	printf("\n\n7) (2) Описать рекурсивную функцию equal(N, S) (где N и S –неотрицательные целые числа), которая проверяет, совпадает ли сумма цифр в десятичной записи числа N со значением S. Например: equal(12345,15) = true, equal(24,7) = false, equal(100,1) = true.");
	printf("\n\n42)для таск4, 2 задание\n\n0) Выход :)");
	while (q != 0) {
		printf("\n\nВведите номер задания: ");
		scanf_s("%d", &q);
		switch (q) {
		
		case 1: {
			int w;
			int n = 0;
			printf("Введите число: ");
			scanf_s("%d", &w);
			printf("%d",zadanye1(w, n));
			break;
		}
		case 2: {
			int a;
			int b;
			
			printf("Введите число: ");
			scanf_s("%d", &a);
			printf("Введите его степень: ");
			scanf_s("%d", &b);
			int c; c = a;
			printf("Ответ: %d",zadanye2(a,&b,&c));
			break;
		}
		case 3: {
			int a=0;

			int max = 0;
			printf("Введите число(до 9 знаков): ");
			scanf_s("%d", &a);
			printf("Ответ: %d", zadanye3(a, max));
			break;
		}
		case 4: {
			zadanye4();
			break;
		}
		case 5: {
			printf("Сумма чисел равна: %d", zadanye5());
			break;
		}
		case 6: {
			zadanye6();
			break;
		}
		case 7: {
			zadanye7();
			break;
		}
		case 42: {
			zadanye42();
			break;
		}
		}
	}
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
