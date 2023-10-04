#pragma once

class cMyClass2
{
	int m_d;

public:
	int a1;
	int a2;

	cMyClass2(int valueA);

	cMyClass2(int valueA, int valueB);

	cMyClass2(int valueA, int valueB, int valueC);

	~cMyClass2();

	void printB();

	void PrintAllValue();

	void SetC(int num);


protected:
	int b;
private:
	int c1;
	int c2;
};
