#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//������� ����� , ����6
int solution1();
void solution2();
void solution3();
void menu();


int main(void) {
	int sel = 0;
	do
	{
		menu();
		scanf("%i", &sel);
		switch (sel)
		{
		case 1:
			solution1();
			break;
		case 2:
			solution2();
			break;
		case 3:
			solution3();
			break;
		case 0:
			printf("Bye-bye");
			break;
		default:
			printf("Wrong selected\n");
		}
	} while (sel != 0);
	return 0;
}

int solution1()
{
	//1. ����������� ���������� ���-�������. �� ���� ������� �������� ������, �� ������ ���������� ����� ����� ��������.


}

void solution2()
{
	/*2. ����������� ������� ���������� ����� a � ������� b:
	   a. ��� ��������;
	   b. ����������;
	   c. *����������, ��������� �������� �������� �������.*/
	printf("Solution 2\n");
}
void solution3()
{
	printf("Solution 3\n");
	// �������
}

void menu()
{
	printf("----------------------------------\n");
	printf("1 - task1 HASH\n");
	printf("2 - task2\n");
	printf("3 - task3\n");
	printf("0 - exit\n");
	printf("----------------------------------\n");
}