#include<stdio.h>


unsigned int CalculatorSum(int x, int y)
{
	printf("�Լ� ���� \n");
	return x+y;
	printf("�Լ� ��");
}

//���� �Լ� �����
// CalculatorMinus
unsigned int CalculatorMinus(int x, int y)
{
	printf("�Լ� ���� \n");
	return x - y;
}


//���ϱ� �Լ� �����
// CalculatorMultiply
unsigned int CalculatorMultiply(int x, int y)
{
	printf("�Լ� ���� \n");
	return x * y;
}


//������ �Լ� �����
// CalculatorSumRemain
unsigned int CalculatorRemain(int x, int y)
{
	printf("�Լ� ���� \n");
	return x % y;
}



void CallFunction()
{
	printf("�Լ� ȣ��ƴ�\n");
	return;
	printf("ȣ�� �ȵǴ� ����");
}


//������ �Լ� �����
// CalculatorDivide
float CalculatorDivide(float x, float y)
{
	printf("�Լ� ���� \n");
	return x / y;
}


int main()
{
	float nResult = 0;
	nResult = CalculatorDivide(50.0, 3.0);
	printf("���� ��� = %f\n", nResult);

	CallFunction();
}