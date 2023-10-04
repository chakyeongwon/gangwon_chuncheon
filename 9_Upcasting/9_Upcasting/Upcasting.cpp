#include<stdio.h>



class CBase
{
public:
	CBase(int x) :m_X(x)
	{
		printf("부모클래스 생성(CBase)=%d\n", m_X);
	}
	~CBase()
	{
		printf("부모클래스 파괴(CBase)\n");
	}

public:
	int m_X;
};

class CChild:public CBase
{
public:
	CChild(int x, int y) :m_Y(y), CBase(x)
	{
		printf("자녀클래스 생성(CChild)=%d, %d\n", m_X, m_Y);
	}
	~CChild()
	{
		printf("자녀클래스 파괴(CChild)\n");
	}
public:
	int m_Y;
};


int main()
{
	CBase base(10);
	
	CChild child(20,30);
	

}