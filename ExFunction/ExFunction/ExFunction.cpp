#include<stdio.h>
#include"Function.h"
#include<iostream>


//�Լ��̸� Sum
//�Ű�����(�Ķ��Ÿ):inta,intb
//��ȯ�� : int
//a�� b�� ���� ����� ��ȯ�Ͻÿ�.

//�Լ� �̸�:Minus
//�Ű�����(�Ķ��Ÿ):inta,intb
//��ȯ�� : int
//a�� b�� ������ ����� ��ȯ�Ͻÿ�.

//�Լ� �̸�:Multy
//�Ű�����(�Ķ��Ÿ):inta,intb
//��ȯ�� : int
//a�� b�� ���ϱ��� ����� ��ȯ�Ͻÿ�.

//�Լ� �̸�:Divide
//�Ű�����(�Ķ��Ÿ):inta,intb
//��ȯ�� : int
//a�� b�� �������� ����� ��ȯ�Ͻÿ�.

//�Լ� �̸�:Average
//�Ķ��Ÿ int &Sum, int a, int b, intc
//��ȯ�� ����
//���۷��� ���� Sum���� a,b,c�� ��� ���� ��ȯ

//�Լ��̸� : ArraySum
//�Ķ��Ÿ int* arr, int length
//��ȯ �� : int
//�迭 "arr"�� �迭�� ���� "length"�� �Ķ��Ÿ�� �޾Ƽ� ��� �迭�� ���� ��ȯ

// Ŭ���� �̸� : CShop
// �ɹ� ���� : m_value(�⺻��:0)
// �ɹ� �Լ� �߰� : printValue
// printValue �Լ� ��� : "Value=%d"�� m_value ���

// Ŭ���� �̸� : CPhoneShop
// �θ� Ŭ���� : CShop
// ������ �Ķ��Ÿ : int PhoneCnt ( m_PhoneCnt�� �� ���� )
// ������ �Ķ��Ÿ : int PhonePrice ( m_PhonePrice�� �� ���� )
// �ɹ� ���� : m_PhoneCnt
// �ɹ� ���� : m_PhonePrice
// printValue �Լ� ��� : "Value=%d"�� m_PhoneCnt * m_PhonePrice���

//CPhoneShop(10, 100) ���� �� ��ü�� printValue ���

// Ŭ���� �̸� : CFruitShop
// ������ �Ķ��Ÿ : int FruitCnt ( m_FruitCnt�� �� ���� )
// ������ �Ķ��Ÿ : int FruitPrice ( m_FruitPrice�� �� ���� )
// �θ� Ŭ���� : CShop
// �ɹ� ���� : m_FruitCnt
// �ɹ� ���� : m_FruitPrice
// printValue �Լ� ��� : "Value=%d"�� m_FruitCnt * m_FruitPrice���

//CFruitShop(10, 100) ���� �� ��ü�� printValue ���

class CShop
{
public:
	int m_value = 0;

	void printValue()
	{
		printf("Value=%d", m_value);
	}

};

class CPhoneShop:public CShop
{
	int m_PhoneCnt;
	int m_PhonePrice;

	CPhoneShop(int PhoneCnt, int PhonePrice):m_PhoneCnt(PhoneCnt), m_PhonePrice(PhonePrice)
	{
		
	}

	

};


void Average(int &Sum, int a, int b, int c)
{
	Sum= (a + b + c) / 3;
}


int ArraySum(int* arr, int length)
{
	int a = 0;
	for (int i = length-1; i >= 0; i--)
	{
		a += arr[i];
	}
		
	return a;

}


int main()
{
	//printf�� 'Sum=%d�� Sum�Լ� ��� ���
	//printf�� 'Minus=%d�� Sum�Լ� ��� ���
	//printf�� 'Multy=%d�� Sum�Լ� ��� ���
	//printf�� 'Divide=%d�� Sum�Լ� ��� ���

	/*int num = 0;
	int C;
	int D;
	float E;
	float F;

	printf("��� ������ �Ͻðڽ��ϱ�?\n0.���ϱ� 1.���� 2.���ϱ� 3.������\n");
	scanf_s("%d\n", &num);

	switch (num)
	{
	case 0:
		scanf_s("%d %d", &C, &D);
		printf("a+b=%d\n", AddSum(C, D));
		break;
	case 1:
		scanf_s("%d %d", &C, &D);
		printf("a-b=%d\n", Minus(C, D));
		break;
	case 2:
		scanf_s("%d %d", &C, &D);
		printf("a*b=%d\n", Multy(C, D));
		break;
	case 3:
		scanf_s("%f %f", &E, &F);
		printf("a/b=%f\n", Divide(E, F));
		break;
	}*/

	
	int ArrPoint[10] = { 2,4,6,2,5,7,8,9,6,4 };
	int* arr = ArrPoint;
	int c=ArraySum(arr,10);
	printf("ArrPoint�� ��=%d\n", c);

	int ReSum;
	Average(ReSum, 10, 20, 30);
	printf("Average=%d\n", ReSum);


	CShop shop;
	shop.printValue();


}