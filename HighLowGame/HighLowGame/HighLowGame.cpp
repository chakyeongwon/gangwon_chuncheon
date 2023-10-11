#include<stdio.h>
#include<vector>
#include<string>
#include"Card.h"
#include<random>


using namespace std;

/*
1. 52���� ī������ ������ �մϴ�.
2. 52���� ī�带 �������� �����ϴ�.
3. ������ ���۵Ǹ� ī�� �ϳ��� ���� �մϴ�.
4. �÷��̾�� ����ī�尡 ���µ� ī�庸�� ���� ī������ ���� ī�������� ���� ������ �մϴ�.
5. ���� ī�带 �����ϰ� ������ �������� ���� ������ ������ �¸� Ʋ���� �й�
6. ī�带 1�� ���� ���� K�� ���� �����ϴ�.
7. ������ �����̵� > ���̾� > ��Ʈ > Ŭ�ι� ������ �����ϴ�.
*/

void Shuffle(std::vector<CCard>& Cards)
{
	std::random_device rd;
	// 1234�� �õ�(seed)���̶�� �ؼ� �ʱ⿡ �־����� Ű��
	// ���� �õ���� ���� ���ڰ� ���ϰ� ���´�.
	// std::mt19937 mt(1234); 
	std::mt19937 mt(rd.entropy());//������ ���� ��µ���, �õ� ���� �������� �ο��ؼ� ���� ���� ����� ������ �ʴ´�.
	std::uniform_int_distribution<int> dist(0, Cards.size() - 1);//0���� ī�� ������ ��ŭ�� ���ڷ� ���� ����
	//dist(mt)>> dist ���� �ȿ��� mt�� ������ ��ȣ�� ��µ�

	for (int i = 0; i < 100; i++)//100ȸ ��ŭ �ٲ۴ٴ� �ǹ�
	{
		int firstIndex = dist(mt);
		int secondIndex = dist(mt);

		CCard temp = Cards[firstIndex];
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}

bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark;

	return ScoreA > ScoreB;
}


int main()
{
	vector<CCard> Cards;

	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card;
			card.m_mark = (CardMark)i;
			card.m_number = j;
			Cards.push_back(card);
		}
	}

	Shuffle(Cards);

	/*for (CCard& Acard : Cards)
	{
		Acard.printCard();
	}*/


	bool bRun = true;
	int i = 0;

	while (bRun)
	{
		Shuffle(Cards);
		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());

		int input = 0;//input = 1 �̸� Cards[0] ����.
		printf("�ι�° ī�尡 ������ 0, ������ 1�� �Է����ּ��� : ");
		scanf_s("%d", &input);
		system("cls");

		printf("�ι�° ī��� %s �Դϴ�.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 �̸� Cards[0] ����.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);

		if (IsFirstHigh == input)
		{
			printf("�����.\n");
		}
		else
		{
			printf("Ʋ�ȴ�.\n");
		}

		i += 2;
	}
	


}
