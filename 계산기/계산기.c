#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int a = 0, b = 0, c;
	while (1)
	{
		printf("계산기\n\n[0] 덧셈\n[1] 뺄셈\n[2] 곱셈\n[3] 나눗셈\n[4] 프로그램 종료\n메뉴 선택 : ");
		scanf("%d", &c);
		if (c == 0) {
			printf("첫번째 숫자 입력 : ");        //덧셈
			scanf("%d", &a);
			printf("두번째 숫자 입력 : ");
			scanf("%d", &b);
			printf("답 : %d\n", a + b);
			Sleep(1000);
			system("cls");
		}

		if (c == 1) {
			printf("첫번째 숫자 입력 : ");        //뺄셈
			scanf("%d", &a);
			printf("두번째 숫자 입력 : ");
			scanf("%d", &b);
			printf("답 : %d\n", a - b);
			Sleep(1000);
			system("cls");
		}

		if (c == 2) {
			printf("첫번째 숫자 입력 : ");		  //곱셈
			scanf("%d", &a);
			printf("두번째 숫자 입력 : ");
			scanf("%d", &b);
			printf("답 : %d\n", a * b);
			Sleep(1000);
			system("cls");
		}

		if (c == 3) {
			printf("첫번째 숫자 입력 : ");		  //나눗셈
			scanf("%d", &a);
			printf("두번째 숫자 입력 : ");
			scanf("%d", &b);
			printf("답 : %lf\n", (double)a / (double)b);
			Sleep(1000);
			system("cls");
		}

		if (c == 4) {
			printf("프로그램 종료");             //프로그램 종료
			Sleep(1000);
			return 0;
		}
	}
}