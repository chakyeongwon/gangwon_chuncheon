#include<stdio.h>
#include<iostream>
#include"calcul.h"



//struct MystructFruit
//{
//	int index;
//	int Apple;
//	int Banana;
//	int Grape;
//	int Peach;
//
//	MystructFruit() : index(0), Apple(2000), Banana(5000), Grape(3000), Peach(9000)
//	{
//
//	}
//
//	void SetFruit(int apple, int banana, int grape, int peach)
//	{
//		Apple = apple;
//		Banana = banana;
//		Grape = grape;
//		Peach = peach;
//	}
//
//	void printSetFruit()
//	{
//		printf("%d번째 가게 과일가격\n사과:%d, 바나나:%d, 포도:%d, 복숭아:%d\n", index, Apple, Banana, Grape, Peach);
//	}
//
//
//};


//struct ItemShop
//{
//	int index;
//	int Sword;
//	int Shield;
//
//
//	ItemShop() :index(0), Sword(50000), Shield(20000)
//	{
//
//	}
//
//
//	void setItemShop(int sword, int shield)
//	{
//		Sword = sword;
//		Shield = shield;
//	}
//
//	void printItemShop()
//	{
//		printf("%d번 가게 아이템 가격\n칼=%d, 방패=%d\n", index, Sword, Shield);
//	}
//
//};


void FailNumber()
{
	printf("잘못입력하셨습니다. 다시 입력해주세요.(예시 '-'제외, OOOOOO O******)\n\n");
}








int main()
{

	bool NumInput = true;

	while (NumInput)
	{
		int Num1;
		int Num2;
		int Num3;
		int Num4;

		printf("[주민번호 출력 시스템]\n");
		printf("주민번호 뒤 첫째자리까지 입력해주세요.(예시 '-'제외, OOOOOO O******)\n");
		scanf_s("%02d%02d%02d%01d", &Num1, &Num2, &Num3, &Num4);
		//printf("%d%d%d-%d******\n", Num1, Num2, Num3, Num4);

		if (Num2 > 12)
		{
			FailNumber();
		}
		else if (Num3>31)
		{
			FailNumber();
		}
		else if (Num4 > 4)
		{
			FailNumber();
		}

		else
		{
			if (Num4 == 1 || Num4 == 3)
			{
				printf("%d년 %d월 %d일 남자\n\n", Num1, Num2, Num3);
			}
			else if (Num4 == 2 || Num4 == 4)
			{
				printf("%d년 %d월 %d일 여자\n\n", Num1, Num2, Num3);
			}
		}
	}




	/*ItemShop shop[4];
	shop[0].setItemShop(30000, 10000);
	shop[0].index = 1;
	shop[1].setItemShop(60000, 40000);
	shop[1].index = 2;
	shop[2].setItemShop(50000, 20000);
	shop[2].index = 3;
	shop[3].setItemShop(100000, 60000);
	shop[3].index = 4;

	for (ItemShop value : shop)
	{
		value.printItemShop();
	}*/






	/*MystructFruit store[3];
	store[0]. SetFruit(2000, 5000, 3000, 9000);
	store[0]. index = 1;
	store[1]. SetFruit(1900, 4900, 2900, 8900);
	store[1]. index = 2;
	store[2]. SetFruit(2100, 5100, 3100, 9100);
	store[2]. index = 3;


	for (MystructFruit stValue : store)
	{
		stValue.printSetFruit();
	}*/



	










	/*printf("%d\n", 1 + 3);*/



	/*unsigned int t_sec = 987654321;
	unsigned int day = 0, hour = 0, min = 0, sec=0;

	sec = t_sec % 60;
	min = (t_sec / 60) % 60;
	hour = ((t_sec / 60) / 60) % 24;
	day = (((t_sec / 60) / 60) / 24);

	printf("987654321초를 day, hour, min, sec 로 나타내시오\n");
	printf("%d day, %d hour, %d min, %d sec 입니다.\n", day, hour, min, sec);*/



	//printf("%f", DivideCalcul(12, 5));


	/*while (true)
	{
		int nInput = 0;
		int Number1 = 0;
		int Number2 = 0;
		float Num1;
		float Num2;

		printf("어떤 연산을 하시겠습니까?\n0.더하기 1.빼기 2.곱하기 3.나누기 4.나머지\n");
		scanf_s("%d", &nInput);

		switch (nInput)
		{
		case 0:
			printf("두 수를 입력하시오\n");
			scanf_s("%d %d", &Number1, &Number2);
			printf("%d\n", SumCalcul(Number1, Number2));
			break;

		case 1:
			printf("두 수를 입력하시오\n");
			scanf_s("%d %d", &Number1, &Number2);
			printf("%f\n", MinusCalcul(Number1, Number2));
			break;

		case 3:
			printf("두 수를 입력하시오\n");
			scanf_s("%f %f", &Num1, &Num2);
			printf("%f\n", DivideCalcul(Num1, Num2));
			break;

		}


	}*/





	//bool bResult = 1;	

	//형변환}
	/*int i2 = 2;
	float f2 = 2.0f;
	i2 = (int)f2+1;
	f2 = float(i2) + 2;
	printf("%d\n", i2);
	printf("%f\n", f2);*/

	//printf("%d", (10 > 5) ? 100 : 50);



	//printf("%d",SumCalcul(3, 4));


	/*while (true)
	{
		int Score = 0;
		printf("점수를 말하시오.\n");
		scanf_s("%d", &Score);
		
		if (Score > 90)
		{
			printf("A학점\n");

		}

		else if (Score > 80)
		{
			printf("B학점\n");

		}

		else if (Score > 70)
		{
			printf("C학점\n");

		}


		else if (Score > 60)
		{
			printf("D학점\n");

		}

		else
		{
			printf("F학점\n");

		}

	}*/


	/*while (true)
	{
	int Myteam = 0;
	int Otherteam = 0;
	int Scoreboard = 0;
	printf("스코어를 입력하시오.\n");
	scanf_s("%d %d", &Myteam,&Otherteam);

	if(Myteam> Otherteam)
		printf("승점3점 획득.\n");

	else if (Myteam == Otherteam)
		printf("승점1점 획득.\n");

	else if (Myteam < Otherteam)
		printf("승점0점.\n");

	}*/


//int A = 0b101011100100;
//int B = 01234567;
//int C = 0xabcdef;
//
//printf("0b101011100100=%d\n", A);
//printf("01234567=%d\n", B);
//printf("0xabcdef=%d\n", C);


//int arrint[10] = { 1,2,3,4,5,6,7,8,9,10 };
//arrint[9] = 100;
//arrint[0] = 10;

//for (int i = 0; i < 10; ++i)
//{
//	printf("%d번째 배열값은 %d입니다\n", i, arrint[i]);
//}


//for (int value : arrint)
//{
//	printf("배열값은 %d입니다\n", value);
//	
//}

//int Array01[100] = { 1,2,3, };
//for (int value : Array01)
//{
//	printf("배열값은 %d입니다\n", value);
//
//}




















































}




