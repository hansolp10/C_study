#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main_condition(void) {
	// 버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
	//int age = 15;
	//if (age >= 20)
	//	printf("일반인 입니다");
	//else
	//	printf("학생입니다");


	// 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
	//int age = 8;
	//if (age >= 8 && age <= 13) {
	//	printf("초등학생입니다\n");
	//}
	//else if (age >= 14 && age <= 16) {
	//	printf("중학생입니다\n");
	//}
	//else if (age >= 17 && age <= 19) {
	//	printf("고등학생입니다\n");
	//}



	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0) {
	//	printf("가위\n");
	//}
	//else if (i == 1) {
	//	printf("바위\n");
	//}
	//else if (i == 1) {
	//	printf("보\n");
	//}



	// Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1) {
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num) {
			printf("DOWN ↓\n\n");
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		else if (answer == num) {
			printf("정답입니다!!\n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요\n\n");
		}

		if (chance == 0) {
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다\n");
			break;
		}
	}


	return 0;

	
}