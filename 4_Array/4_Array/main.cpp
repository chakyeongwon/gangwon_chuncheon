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


//����ü
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
		int appleB = Apple;//SetFruitValue �Լ��� ����Ǹ� ������� ����
		apple = Apple;//�ش纯���� �� ����ü�� ������ ���� ����
		mango = Mango;
		strawberry = Strawberry;
	}

	void printShopValue()
	{
		printf("���ϰ��� ���� ���:%d, ����:%d, ����:%d\n", apple,mango,strawberry);
	}

};


//����ü ����
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
		printf("%d��° ���� �ڵ��� ���� ������:%d, z�ø�:%d, ������23:%d, ����������:%d\n", index,iPhone,zFlip,GalaxyS23,GalaxyFold);
	}

	
};


int main()
{
	printf("�������=%d\n", AddNum(50, 3));
	printf("�������=%f\n", MinusNum(50, 3));
	printf("�������=%d\n", MultiplyNum(50, 3));
	printf("��������=%f\n", DivideNum(50, 3));
	printf("���������=%d\n", RemainNum(50, 3));



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



	////�迭

	//int arrInt[10] = {1,2,3,4,5,6,7,8,9,10 };
	//arrInt[0] = 10;
	//arrInt[4] = 50;
	//arrInt[9] = 100;
	////���߹迭//int arrInt[10][10],int arrInt[1][5], �ش������ �迭 ���� �迭�� ���� ������ �� �ִ�.


	//for (int i=0; i < 10; i++)
	//{
	//	printf("%d��° �迭 ���� %d�Դϴ�\n", i, arrInt[i]);
	//}

	//for (int value : arrInt)
	//{
	//	printf("for each�� �˻��� �迭 ���� %d�Դϴ�\n", value);
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