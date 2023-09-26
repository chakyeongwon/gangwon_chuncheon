#include<stdio.h>
#include "calcFunc.h"

//static int g_money = 0;
//
//int s_money = 0;


int Add(int a, int b)
{
	return a + b;
}

float Add(float a, float b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}


//구조체
struct FruitShop
{
	int apple;
	int mango;
	int strawberry;

	FruitShop() : apple(1000), mango(1000), strawberry(1000)
	{

	}

	void SetFruitValue(int Apple, int Mango, int Strawberry)
	{
		int appleB = Apple;//SetFruitValue 함수가 종료되면 사라지는 변수
		apple = Apple;//해당변수는 위 구조체의 변수에 들어가는 변수
		mango = Mango;
		strawberry = Strawberry;
	}

	void printShopValue()
	{
		printf("과일가게 가격 사과:%d, 망고:%d, 딸기:%d\n", apple,mango,strawberry);
	}

};


//구조체 예시
struct PhoneShop
{
	int index;
	int iPhone;
	int zFlip;
	int GalaxyS23;
	int GalaxyFold;

	PhoneShop() : index(0), iPhone(100), zFlip(100), GalaxyS23(100), GalaxyFold(100)
	{

	}

	void SetPhoneShopValue(int iphone, int zflip, int galaxyS23, int galaxyFold)
	{
		iPhone = iphone;
		zFlip = zflip;
		GalaxyS23 = galaxyS23;
		GalaxyFold = galaxyFold;
	}

	void printPhoneShopValue()
	{
		printf("%d번째 가게 핸드폰 가격 아이폰:%d, z플립:%d, 갤럭시23:%d, 갤럭시폴드:%d\n", index,iPhone,zFlip,GalaxyS23,GalaxyFold);
	}

	
};


int main()
{
	printf("덧셈결과=%d\n", AddNum(50, 3));
	printf("뺄셈결과=%f\n", MinusNum(50, 3));
	printf("곱셈결과=%d\n", MultiplyNum(50, 3));
	printf("나누기결과=%f\n", DivideNum(50, 3));
	printf("나머지결과=%d\n", RemainNum(50, 3));



	/*int t_money = 0;
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	useMoney(30);
	useMoney(30);

	printf("t_money=%d\n", t_money);
	printf("s_money=%d\n", s_money);*/



	printf("%d\n", Add(1, 1));
	printf("%f\n", Add(1.0f, 1.0f));
	printf("%f\n", Add(1.0, 1.0));



	////배열

	//int arrInt[10] = {1,2,3,4,5,6,7,8,9,10 };
	//arrInt[0] = 10;
	//arrInt[4] = 50;
	//arrInt[9] = 100;
	////이중배열//int arrInt[10][10],int arrInt[1][5], 해당식으로 배열 안의 배열에 값을 지정할 수 있다.


	//for (int i=0; i < 10; i++)
	//{
	//	printf("%d번째 배열 값은 %d입니다\n", i, arrInt[i]);
	//}

	//for (int value : arrInt)
	//{
	//	printf("for each로 검색한 배열 값은 %d입니다\n", value);
	//}


	FruitShop shop[3];
	shop[0].SetFruitValue(1000, 2000, 3000);
	shop[1].SetFruitValue(1100, 2100, 3100);
	shop[2].SetFruitValue(900, 1900, 2900);

	for (FruitShop stValue : shop)
	{
		stValue.printShopValue();
	}
		

	

	PhoneShop phone[3];
	phone[0].SetPhoneShopValue(100, 90, 80, 150);
	phone[0].index = 1;
	phone[1].SetPhoneShopValue(110, 100, 90, 160);
	phone[1].index = 2;
	phone[2].SetPhoneShopValue(90, 80, 70, 140);
	phone[2].index = 3;

	for (PhoneShop stValue : phone)
	{
		stValue.printPhoneShopValue();
	}

	
}