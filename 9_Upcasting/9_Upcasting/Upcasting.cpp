#include<stdio.h>



class CBase
{
public:
	CBase(int x=1,int y=2) :m_X(x), m_Y(y)
	{
		printf("부모클래스 생성(CBase)=%d %d\n", m_X, m_Y);
	}
	~CBase()
	{
		printf("부모클래스 파괴(CBase)\n");
	}

	//자녀에도 Y변수 출력하고 싶음/기능추가시 가상함수(virtual function)
	//자녀 클래스에서 재정의 가능성이 있는 함수에 적용
	//함수 앞에 virtual을 붙임.
	/*virtual void printValue()
	{
		printf("m_X=%d %d\n", m_X, m_Y);
	}*/


public:
	int m_X;
	int m_Y;
};

class CChild:public CBase
{
public:
	CChild(int x=1, int y=2, int z=3) :m_Z(z), CBase(x,y)
	{
		printf("자녀클래스 생성(CChild)\nm_X=%d, m_Y=%d, m_Z=%d\n", m_X, m_Y, m_Z);
	}
	~CChild()
	{
		printf("자녀클래스 파괴(CChild)\n");
	}

	//virtual void printValue() override
	//{
	//	CBase::printValue();//부모의 처리를 그대로 실행
	//	printf("m_X=%d, m_Y=%d, m_Z=%d\n", m_X, m_Y, m_Z);
	//}

public:
	int m_Z;
};


void printObject(CBase** pBase, int n)//부모 변수로 정의했지만, 자녀 변수로 불러내도 작동함//upcasting
{
	for (int i = 0; i < n; i++)
	{
		printf("xpos=%d, ypos=%d\n", pBase[i]->m_X, pBase[i]->m_Y);
	}
}


int main()
{
	/*CBase base(10,20);
	base.m_X = 100;
	base.printValue();

	CChild child(20,30,40);
	child.m_X = 200;
	child.printValue();*/

		
	/*CChild* pArrChild = new CChild[10];
	printObject(pArrChild, 10);
	delete[] pArrChild;*/

	CBase** pArrBase = new CBase * [10];
	for (int i = 0; i < 10; i++)
	{
		pArrBase[i] = new CChild;
	}
	printObject(pArrBase, 10);
	
	for (int i = 0; i < 10; i++)
	{
		delete pArrBase[i];
	}
	delete[] pArrBase;

}