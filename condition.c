#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_condition(void) {
	// ������ ź�ٰ� ����. �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
	//int age = 15;
	//if (age >= 20)
	//	printf("�Ϲ��� �Դϴ�");
	//else
	//	printf("�л��Դϴ�");


	// �ʵ��л�(8~13) / ���л�(14~16) / ����л�(17~19)���� ������?
	//int age = 8;
	//if (age >= 8 && age <= 13) {
	//	printf("�ʵ��л��Դϴ�\n");
	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("���л��Դϴ�\n");
	//}
	//else if (age >= 17 && age <= 19) {
	//	printf("����л��Դϴ�\n");
	//}



	// ���� 0 ���� 1 �� 2
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0) {
	//	printf("����\n");
	//}
	//else if (i == 1) {
	//	printf("����\n");
	//}
	//else if (i == 1) {
	//	printf("��\n");
	//}



	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) {
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ��\n\n");
		}
		else if (answer < num) {
			printf("UP ��\n\n");
		}
		else if (answer == num) {
			printf("�����Դϴ�!!\n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾��\n\n");
		}

		if (chance == 0) {
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�\n");
			break;
		}
	}


	return 0;

	
}