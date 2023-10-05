#include<stdio.h>



class CBase
{
public:
	CBase(int x=1,int y=2) :m_X(x), m_Y(y)
	{
		printf("�θ�Ŭ���� ����(CBase)=%d %d\n", m_X, m_Y);
	}
	~CBase()
	{
		printf("�θ�Ŭ���� �ı�(CBase)\n");
	}

	//�ڳ࿡�� Y���� ����ϰ� ����/����߰��� �����Լ�(virtual function)
	//�ڳ� Ŭ�������� ������ ���ɼ��� �ִ� �Լ��� ����
	//�Լ� �տ� virtual�� ����.
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
		printf("�ڳ�Ŭ���� ����(CChild)\nm_X=%d, m_Y=%d, m_Z=%d\n", m_X, m_Y, m_Z);
	}
	~CChild()
	{
		printf("�ڳ�Ŭ���� �ı�(CChild)\n");
	}

	//virtual void printValue() override
	//{
	//	CBase::printValue();//�θ��� ó���� �״�� ����
	//	printf("m_X=%d, m_Y=%d, m_Z=%d\n", m_X, m_Y, m_Z);
	//}

public:
	int m_Z;
};


void printObject(CBase** pBase, int n)//�θ� ������ ����������, �ڳ� ������ �ҷ����� �۵���//upcasting
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