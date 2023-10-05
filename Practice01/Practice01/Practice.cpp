#include<stdio.h>
#include<iostream>


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
		printf("아이폰=%d, 갤럭시23=%d, 지플립=%d\n", Iphone, Galaxy23, ZFlip);
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

void SellPhone(ePhoneType phonetype, MyPhoneshop* Type)
{
	switch (phonetype)
	{
	case Iphone:
		Type->Iphone--;
		break;
	case Galaxy23:
		Type->Galaxy23--;
		break;
	case ZFlip:
		Type->ZFlip--;
		break;
	default:
		break;
	}
}

unsigned int Strength(wchar_t* parr)
{
	int i = 0;

	while (true)
		
	{
		wchar_t C = *(parr + i);
		
		if (C == '\0')
		{
			break;
		}
		i++;
	}
	return i;
}



int main()
{

	_wsetlocale(LC_ALL, L"korean");

	MyPhoneshop shop;
	shop.Iphone=100;
	shop.Galaxy23 = 100;
	shop.ZFlip = 100;

	SetRemain(&shop);
	shop.PrintNumPhone();

	SellPhone(ePhoneType::Iphone, & shop);
	shop.PrintNumPhone();


	wchar_t Arr[10] = L"차경원";
	int LS=Strength(Arr);
	printf("Arr 길이=%d\n", LS);



}