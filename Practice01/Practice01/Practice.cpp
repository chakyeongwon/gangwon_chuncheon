#include<stdio.h>


struct MyPhoneshop
{
	int Iphone;
	int Galaxy23;
	int ZFlip;

	MyPhoneshop() :Iphone(100), Galaxy23(100), ZFlip(100)
	{
		
	}

	void PrintNumPhone()
	{
		printf("������=%d, ������23=%d, ���ø�=%d\n", Iphone, Galaxy23, ZFlip);
	}

	
};

void SetRemain(MyPhoneshop* pPhone)
{
	pPhone->Iphone--;
	pPhone->Galaxy23--;
	pPhone->ZFlip--;
}

enum ePhoneType
{
	Iphone,
	Galaxy23,
	ZFlip,
};



int main()
{

	MyPhoneshop shop;
	shop.Iphone=100;
	shop.Galaxy23 = 100;
	shop.ZFlip = 100;

	SetRemain(&shop);
	shop.PrintNumPhone();

}