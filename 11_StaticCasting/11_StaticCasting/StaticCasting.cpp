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
	CBase* pBase = new CChild1;//차일드가 베이스 함수를 상속하기 때문에 베이스 포인터로 주소값 출력 가능
	//pBase->printB();//차일드에 프린트 함수가 있기 때문에 베이스 포인터로는 출력불가

	CChild1* pChild1 = (CChild1*)pBase;
	pChild1->printB();

	//인트와 클래스를 캐스팅 해버렸으나 오류가 나지 않음// 오류가 나지 않아 더 문제가 될 수 있음.
	int* a = new int(0);
	pChild1 = (CChild1*)a;


	pChild1 = static_cast<CChild1*>(pBase);
	pChild1->printB();


	CBase* pBase2 = new CChild1;
	CChild2* pChild2 = static_cast<CChild2*>(pBase2);
	pChild2->printB();//차일드2의 프린트c가 출력되나, 차일드2는 인트형 변수 출력함수이기 때문에, 3.14가 출력되지 않음//static이 자녀의 변수 형태는 확인하지 않고 컴파일 해버린다.

	float fvalue = 3.14f;
	int* pl = (int*)&fvalue;
	printf("pl=%d", *pl);


	delete pBase;
	delete a;
	delete pBase2;

}