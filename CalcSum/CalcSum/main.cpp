#include<stdio.h>
#include "calcFunc.h"

int Sum(int a, int b)
{
	return a + b;
}

float Minus(int a, int b)
{
	return a - b;
}

int Multiply(int a, int b)
{
	return a * b;
}

float Divide(float a, float b)
{
	return a / b;
}

int Remain(int a, int b)
{
	return a % b;
}


int main()
{
	/*bool bRun = true;
	while (bRun)
	{
		int nInput = 0;
		int num1, num2;
		
		printf("어떤 연산을 하시겠습니까? (0:더하기, 1:빼기, 2:곱하기, 3:나누기, 4:나머지)");
		scanf_s("%d", &nInput);
		switch (nInput)
		{
		case 0:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 합은 %d입니다\n", Sum(num1, num2));

			break;

		case 1:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 뺄셈은 %f입니다\n", Minus(num1, num2));

			break;

		case 2:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 곱셈은 %d입니다\n", Multiply(num1, num2));

			break;

		case 3:
			
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 나누기는 %f입니다\n", Divide(num1, num2));

			break;

		case 4:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 나머지는 %d입니다\n", Remain(num1, num2));

			break;
		}

	}
	return 0;*/


	bool bRun = true;
	while (bRun)
	{
		int nInput = 0;
		int num1, num2;

		printf("어떤 연산을 하시겠습니까? (0:더하기, 1:빼기, 2:곱하기, 3:나누기, 4:나머지)");
		scanf_s("%d", &nInput);
		switch (nInput)
		{
		case 0:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 합은 %d입니다\n", AddNum(num1, num2));

			break;

		case 1:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 뺄셈은 %f입니다\n", MinusNum(num1, num2));

			break;

		case 2:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 곱셈은 %d입니다\n", MultiplyNum(num1, num2));

			break;

		case 3:

			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 나누기는 %f입니다\n", DivideNum(num1, num2));

			break;

		case 4:
			printf("숫자 2개를 입력하세요(num1 num2):");
			scanf_s("%d %d", &num1, &num2);
			printf("두 수의 나머지는 %d입니다\n", RemainNum(num1, num2));

			break;
		}

	}
	return 0;

		/*printf("숫자 2개를 입력하세요(num1 num2):");
		scanf_s("%d %d", &num1, &num2);
		printf("두 수의 합은 %d입니다\n", Sum(num1, num2));

		printf("계산기를 종료하시겠습니까?(0:No, 1:Yes)");
		scanf_s("%d", &nInput);

		switch(nInput)
		{
		case 1:
			bRun = false;
			break;
		
		case 0:
			continue;
		}
	}
	return 0;*/



}