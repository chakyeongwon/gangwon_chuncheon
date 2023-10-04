#include"Myclass.h"
#include<stdio.h>

cMyClass2::cMyClass2(int valueA) :a1(valueA), a2(0), b(0), c1(0), c2(0), m_d(0)
{
	printf("생성자 A호출됨, %d %d\n", a1, a2);
}

cMyClass2::cMyClass2(int valueA, int valueB) :a1(valueA), a2(valueB), b(0), c1(0), c2(0), m_d(0)
{
	printf("생성자 B호출됨, %d %d\n", a1, a2);
}

cMyClass2::cMyClass2(int valueA, int valueB, int valueC) :a1(valueA), a2(valueB), b(valueC), c1(0), c2(0), m_d(0)
{
	printf("생성자 C호출됨, %d %d %d\n", a1, a2, b);
}

cMyClass2::~cMyClass2()
{
	printf("생성자 파괴됨\n");
}

void cMyClass2::printB()
{
	printf("D=%d", m_d);
}

void cMyClass2::PrintAllValue()
{
	printf("A1=%d, A2=%d, C1=%d", a1, a2, c1);
}



void cMyClass2::SetC(int num)
{
	c1 = num;
}

