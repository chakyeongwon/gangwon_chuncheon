#include<stdio.h>


unsigned int CalculatorSum(int x, int y)
{
	printf("함수 시작 \n");
	return x+y;
	printf("함수 끝");
}

//빼기 함수 만들기
// CalculatorMinus
unsigned int CalculatorMinus(int x, int y)
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
unsigned int CalculatorRemain(int x, int y)
{
	printf("함수 시작 \n");
	return x % y;
}



void CallFunction()
{
	printf("함수 호출됐다\n");
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


int main()
{
	float nResult = 0;
	nResult = CalculatorDivide(50.0, 3.0);
	printf("실행 결과 = %f\n", nResult);

	CallFunction();
}