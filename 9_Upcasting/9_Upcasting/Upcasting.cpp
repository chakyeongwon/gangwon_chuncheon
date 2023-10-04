#include<stdio.h>



class CBase
{
public:
	CBase(int x) :m_X(x)
	{
		printf("�θ�Ŭ���� ����(CBase)=%d\n", m_X);
	}
	~CBase()
	{
		printf("�θ�Ŭ���� �ı�(CBase)\n");
	}

public:
	int m_X;
};

class CChild:public CBase
{
public:
	CChild(int x, int y) :m_Y(y), CBase(x)
	{
		printf("�ڳ�Ŭ���� ����(CChild)=%d, %d\n", m_X, m_Y);
	}
	~CChild()
	{
		printf("�ڳ�Ŭ���� �ı�(CChild)\n");
	}
public:
	int m_Y;
};


int main()
{
	CBase base(10);
	
	CChild child(20,30);
	

}