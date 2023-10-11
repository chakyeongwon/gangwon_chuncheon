#include<stdio.h>
#include<string>

using namespace std;

enum CardMark//¿­°ÅÇü
{
	None = 0,
	Clover,
	Heart,
	Dia,
	Spade,
	MaxMark
};


class CCard
{
public:
	CCard(CardMark mark = CardMark::None, int number = 0);

	string GetMarkStr();

	string GetCardStr();

	void printCard();

public:
	CardMark m_mark;
	int m_number;
};