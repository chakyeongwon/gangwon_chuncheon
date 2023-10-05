#include<iostream>
#include<stdio.h>


class CBase
{
public:

	virtual void printX()
	{
		printf("X=%d\n", m_X);
	}

	int m_X = 10;

};

class CChild1:public CBase
{
public:
	void printY()
	{
		printf("Y=%d\n", m_Y);
	}

	int m_Y = 20;

};

class CChild2 :public CBase
{
public:
	void printZ()
	{
		printf("Z=%d\n", m_Z);
	}

	int m_Z = 20;

};


int main()
{
	int64_t i64 = sizeof(CBase);
	printf("CBase Size=%I64d\n", i64);
	printf("CChild1 Size=%I64d\n", sizeof(CChild1));

	int64_t* pB = (int64_t*)new CBase;
	int64_t* pC = (int64_t*)new CChild1;
	printf("pB[0]=%I64d, pB[1]=%d\n", pB[0], (int)pB[1]);
	printf("pC[0]=%I64d, pC[1]=%d, pC[2]=%d\n", pC[0], (int)pC[1], (int)pC[2]);

	delete pB;
	delete pC;

	//이렇게 배열을 넣을 수 있다.
	CBase* pBase[] = { new CChild1, new CChild2 };

	for (CBase* pTemp : pBase)
	{
		pTemp->printX();

		CChild1* pChild1 = dynamic_cast<CChild1*>(pTemp);
		if (pChild1 == nullptr)
			continue;

		pChild1->printY();

	}

	for (CBase* pTemp : pBase)
	{
		delete pTemp;
	}

}
