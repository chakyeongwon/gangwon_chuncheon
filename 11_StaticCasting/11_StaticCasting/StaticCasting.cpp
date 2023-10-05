#include<stdio.h>
#include<iostream>


class CBase
{
public:
	int a = 1;
	
};

class CChild1:public CBase
{
public:
	void printB()
	{
		printf("Child1::printB=%f\n", b);
	}

	float b = 3.14f;

};

class CChild2 :public CBase
{
public:
	void printB()
	{
		printf("Child2::printC=%d\n", c);
	}

	int c = 3;
};



int main()
{
	CBase* pBase = new CChild1;//���ϵ尡 ���̽� �Լ��� ����ϱ� ������ ���̽� �����ͷ� �ּҰ� ��� ����
	//pBase->printB();//���ϵ忡 ����Ʈ �Լ��� �ֱ� ������ ���̽� �����ͷδ� ��ºҰ�

	CChild1* pChild1 = (CChild1*)pBase;
	pChild1->printB();

	//��Ʈ�� Ŭ������ ĳ���� �ع������� ������ ���� ����// ������ ���� �ʾ� �� ������ �� �� ����.
	int* a = new int(0);
	pChild1 = (CChild1*)a;


	pChild1 = static_cast<CChild1*>(pBase);
	pChild1->printB();


	CBase* pBase2 = new CChild1;
	CChild2* pChild2 = static_cast<CChild2*>(pBase2);
	pChild2->printB();//���ϵ�2�� ����Ʈc�� ��µǳ�, ���ϵ�2�� ��Ʈ�� ���� ����Լ��̱� ������, 3.14�� ��µ��� ����//static�� �ڳ��� ���� ���´� Ȯ������ �ʰ� ������ �ع�����.

	float fvalue = 3.14f;
	int* pl = (int*)&fvalue;
	printf("pl=%d", *pl);


	delete pBase;
	delete a;
	delete pBase2;

}