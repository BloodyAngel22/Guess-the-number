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
	printf("Игра 'Угадай число'");
	do {
		printf("Введите диапозон от a до b. (a < b, a и b > 0, минимальный от 1 до 5)\n");
		scanf_s("%d", &a); scanf_s("%d", &b);
	} while (a > b or a < 1 or b < 1 or b - a < 4);

	int randomNumber = a + rand() % (b - a + 1);
	system("cls");
	printf("Диапозон от %d до %d\n", a, b);
	printf("Угадай число\n");
	while (isRunning) {
		printf("Введите число "); scanf_s("%d", &userNumber);
		printf("Количетсво ходов %d\n", ++score);
		if (userNumber < randomNumber) printf("Больше\n");
		if (userNumber > randomNumber) printf("Меньше\n");
		if (userNumber == randomNumber) {
			printf("\nПоздравляю вы угадали за %d хода/-ов\n\n", score);
			system("pause");
			isRunning = false;
		}
	}
	system("cls");
	printf("Игра окончена");
}