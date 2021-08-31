#include <stdint.h>

int main_loop(void) {
	
	// for (선언; 조건; 증감)
	//for (int i = 1; i <= 10; i++) {
	//	printf("Hello World %d\n", i);
	//}

	// while(조건){ }
	// do { } while (조건)

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("     두 번째 반복문 : %d\n", j);
		}
	}*/

	/*for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("   %d x %d = %d\n", i, j, i * j);
		}
	}*/

	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j <= i; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//for (int i = 0; i > 5; i--) {
	//	for (int j = 0; j >= i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}




	//피라미드를 쌓아라 - 프로젝트
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}