#include<stdio.h>
#include"Myclass.h"

struct stMystruct
{
	int a;

	stMystruct():a(0)
	{
	}
};

class cMyClass
{
	int m_d;

public:
	int a1;
	int a2;

	cMyClass(int valueA=0):a1(valueA), m_d(0), c1(0), a2(0), b(0), c2(0)
	{
		printf("생성자 A호출됨, %d %d\n", a1, a2);
	}

	cMyClass(int valueA, int valueB) :a1(valueA), m_d(valueB), c1(0), a2(0), b(0), c2(0)
	{
		printf("생성자 B호출됨, %d %d\n", a1, a2);
	}

	cMyClass(int valueA, int valueB, int valueC) :a1(valueA), m_d(valueB), c1(valueC), a2(0), b(0), c2(0)
	{
		printf("생성자 C호출됨, %d %d %d\n", a1, a2, c1);
	}

	~cMyClass()
	{
		printf("생성자 파괴됨\n");
	}

	void printB()
	{
		printf("D=%d", m_d);
	}

	void PrintAllValue()
	{
		printf("A1=%d, A2=%d, C1=%d\n", a1, m_d, c1);
	}

	void SetC(int num)
	{
		c1 = num;
		printf("c1=%d\n", c1);
	}

	const cMyClass& operator=(const cMyClass& other)
	{
		a1 = other.a1;
		m_d = other.m_d;
		c1 = other.c1;

		return *this;
	}

	const cMyClass& operator+(const cMyClass& other)
	{
		return cMyClass(a1 + other.a1, m_d + other.m_d, c1 + other.c1);
	}

protected:
	int b;
private:
	int c1;
	int c2;
};






int main()
{
	{
		int num=100;
		stMystruct stTest;


		int* pNum = &num;
		stMystruct* pTest = &stTest;
		pTest->a = 0;
		printf("&pNum == &num ? %d\n", (int(&pTest) == int(&stTest)));


		int refNum = num;
		stMystruct& refTest = stTest;
		refTest.a = 0;
		printf("&refNum == &num ? %d\n", (int(&refTest) == int(&stTest)));

	}



	cMyClass cMy(10);//생성자A 호출
	printf("cMy.a1=%d\n", cMy.a1);
	cMyClass cMy2(20,100);//생성자B 호출
	printf("cMy.a1=%d\n", cMy2.a1);

	//cMyClass2 aa;
	

	cMy = cMy2;
	cMyClass cMy3;
	/*cMy.SetC(10);

	cMy.SetC(200);

	cMy.SetC(300);*/

	cMy.a1 = 1000;
	cMy.PrintAllValue();
	cMy2.PrintAllValue();
	cMy3 = cMy + cMy2;
	cMy3.PrintAllValue();


	
	
	
	
	//c1 = 100;
}