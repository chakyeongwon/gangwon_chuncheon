#include<stdio.h>


//unsigned int CalculatorSum(int x, int y)
//{
//	printf("함수 시작 \n");
//	return x+y;
//	printf("함수 끝");
//}

//빼기 함수 만들기
// CalculatorMinus
float CalculatorMinus(int x, int y)
{
	printf("함수 시작 \n");
	return x - y;
}


//곱하기 함수 만들기
// CalculatorMultiply
unsigned int CalculatorMultiply(int x, int y)
{
	printf("함수 시작 \n");
	return x * y;
}


//나머지 함수 만들기
// CalculatorSumRemain
float CalculatorRemain(int x, int y)
{
	printf("함수 시작 \n");
	return x % y;
}



void CallFunction()
{
	printf("4! 연습해보기\n");
	return;
	printf("호출 안되는 문장");
}


//나누기 함수 만들기
// CalculatorDivide
float CalculatorDivide(float x, float y)
{
	printf("함수 시작 \n");
	return x / y;
}


unsigned int CalculatorSum(int x, int y)
{
	return x + y;
}


//Factorial 함수
int Factorial(int x)
{
	int FacResult = 1;
	for (int i = x;i > 0; --i)
	{
		FacResult*= i;
	}
	return FacResult;
}

int Factorial2(int x)
{
	int FacResult = 1;
	for (int i = x; i < 5; ++i)
	{
		FacResult *= i;
	}
	return FacResult;
}



int ReFactorial(int x)
{
	if (x == 1)
	{
		return 1;
	}
	return x * ReFactorial(x - 1);
}


int SumTon(int x)
{
	return x * (x + 1) / 2;
}

int SumTon2(int x)
{
	int eResult = x;
	for (int i = eResult; i > 0; --i)
	{
		eResult *= i;
	}
	return eResult;
}
	

int AAA()
{
	while (true)
	{
		printf("첫번째 while 실행\n");
		break;
	}
	while (true)
	{
		printf("두번째 while 실행\n");
		return 0;
	}
	while (true)
	{
		printf("세번째 while 실행\n");
		break;
	}
	return 0;
}


int main()
{
	//int nResult = 0;
	//nResult = CalculatorSum(50, 3);
	//printf("실행 결과 = %d\n", nResult);

	//CallFunction();

	
	/*printf("마이너스 결과값=%f\n", CalculatorMinus(2, 7));*/


	//float cResult = 0;
	//cResult = CalculatorDivide(12.0, 4.0);
	//printf("나누기 결과값=%f\n", cResult);
	//cResult = CalculatorRemain(13.0, 4.0);
	//printf("나머지 결과값=%f\n", cResult);


	//for(int i=0;i<10;++i)
	//{
	//	printf("%d Hello\n", i);
	//}

	/*for (int b = 0; b < 10; ++b)
	{
		printf("%d Hello\n", b);
	}

	int c = 0;
	for (; c < 10; c= c+3)
	{
		printf("%d Hello\n", c);
	}

	for (int d=1; d < 20; d*=3)
	{
		printf("%d Hello\n", d);
	}
*/

	/*int FacResult = 1;
	for (int i = 1; i < 5; ++i)
	{
		FacResult *= i;
	}

	printf("4! =%d\n", FacResult);


	int FacNum = 1;
	for (int i = 4; i > 0; --i)
	{
		FacNum *= i;
	}
	printf("4! =%d\n", FacNum);*/



	/*int nResult = 1;
	nResult = Factorial(4);
	printf("4! = %d\n", nResult);


	printf("4! = %d\n", Factorial2(1));

	printf("%d\n", ReFactorial(5));*/

	//printf("%d\n", SumTon(10));
	//printf("%d\n", SumTon2(10));
	//CallFunction();



	//int aResult = 1;
	//int i = 1;
	//while (i <= 10)
	//{
	//	aResult *= i;
	//	i++;
	//}
	//printf("while Factorial=%d", aResult);



	//0-Num까지 짝수만 더하기
	int i = 0, Num = 10;
	int sResult=0;
	while (i <= Num)
	{
		i++;
		if (i % 2 != 0)
			continue;
		
		sResult += i;
		
	}
	printf("0-Num EvenSum=%d\n", sResult);


	int nResult = 0;
	for (int i= nResult; i <= 10; i += 1)
	{
		if (i % 2 != 0)
		{
			continue;
		}

		nResult += i;
	}
	printf("for문으로 짝수더하기 결과=%d\n", nResult);


	
	AAA();


}