#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
	system("chcp 1251");
	srand(time(NULL));
	bool isRunning = true;
	int a, b;
	int userNumber = 0;
	int score = 0;
	printf("���� '������ �����'");
	do {
		printf("������� �������� �� a �� b. (a < b, a � b > 0, ����������� �� 1 �� 5)\n");
		scanf_s("%d", &a); scanf_s("%d", &b);
	} while (a > b or a < 1 or b < 1 or b - a < 4);

	int randomNumber = a + rand() % (b - a + 1);
	system("cls");
	printf("�������� �� %d �� %d\n", a, b);
	printf("������ �����\n");
	while (isRunning) {
		printf("������� ����� "); scanf_s("%d", &userNumber);
		printf("���������� ����� %d\n", ++score);
		if (userNumber < randomNumber) printf("������\n");
		if (userNumber > randomNumber) printf("������\n");
		if (userNumber == randomNumber) {
			printf("\n���������� �� ������� �� %d ����/-��\n\n", score);
			system("pause");
			isRunning = false;
		}
	}
	system("cls");
	printf("���� ��������");
}