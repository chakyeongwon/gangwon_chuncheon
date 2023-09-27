#include<stdio.h>


//void Buyitem(int* Money, int price)
//{
//	*Money -= price;
//}


enum ePhoneType
{
	iPhone,
	Galaxy23,
	GalaxyFold,
	GalaxyZ
};

struct stPhoneShop
{
	int iPhoneCnt;
	int Galaxy23;
	int GalaxyFold;
	int GalaxyZ;

	void printPhoneCnt()
	{
		printf("iPhone=%d, Galaxy23=%d, GalaxyFold=%d, GalaxyZ=%d\n", iPhoneCnt, Galaxy23, GalaxyFold, GalaxyZ);
	}

};

void BuyiPhone(stPhoneShop* pPS)
{
	pPS->iPhoneCnt--;//포인트로 참조하는 구조체의 변수는 '->'키워드로 참조한다.
	pPS->Galaxy23--;
	pPS->GalaxyFold--;
	pPS->GalaxyZ--;
}


void BuyPhone(ePhoneType phoneType, stPhoneShop* pPS)
{
	switch (phoneType)
	{
	case ePhoneType::iPhone:
		pPS->iPhoneCnt--;
		break;
	case ePhoneType::Galaxy23:
		pPS->Galaxy23--;
		break;
	case ePhoneType::GalaxyFold:
		pPS->GalaxyFold--;
		break;
	case ePhoneType::GalaxyZ:
		pPS->GalaxyZ--;
		break;
	default:
		break;
	}
}


void printNumber(const int* number)
{
	//number = nullptr;
	//*number = 2;
	printf("print number=%d\n", *number);
}

void printNumber2(const int& number)
{
	//number = nullptr;
	//number = 2;
	printf("print number=%d\n", number);
}


void printPhoneShop(const stPhoneShop* ps)
{
	printf("print iPhoneCnt=%d\n", ps->iPhoneCnt);
}

void printPhoneShop(const stPhoneShop& ps)
{
	printf("print iPhoneCnt=%d\n", ps.iPhoneCnt);
}


int main()
{
	/*int a = 0;
	int b = 0;
	int* pA = nullptr;
	pA = &a;
	b = *pA;
	*pA = 10;*/


	/*int num1 = 0;
	int num2 = 0;
	int* pNum = nullptr;
	
	pNum = &num1;
	printf("pNum=%d\n", *pNum);
	*pNum = 20;
	printf("pNum=%d\n", *pNum);
	pNum = &num2;
	printf("pNum=%d\n", *pNum);
	*pNum = 30;
	printf("pNum=%d\n", *pNum);
	printf("num1=%d, num2=%d\n", num1, num2);*/


	/*int Money= 10000;

	Buyitem(&Money, 1000);
	printf("MyMoney=%d\n", Money);


	stPhoneShop stPS;
	stPS.iPhoneCnt = 100;
	stPS.Galaxy23 = 100;
	stPS.GalaxyFold = 100;
	stPS.GalaxyZ = 100;


	BuyPhone(ePhoneType::iPhone, & stPS);
	stPS.printPhoneCnt();*/


	//배열과 포인터

	//int arrInt[10] = { 0,10,20,30,40,50,60,70,80,90 };
	//int* plnt = nullptr;
	//plnt = arrInt;
	//printf("plnt=%d\n", *plnt);
	//plnt += 1;
	//printf("plnt=%d\n", *plnt);

	//short arrS[10] = { 0,10,20,30,40,50,60,70,80,90 };
	//plnt = (int*)arrS;
	//plnt += 1;
	//short* pS = (short*)plnt;
	//printf("plnt=%d\n", *pS);


	//아래 배열을 낮은 숫자 순서대로 출력
	

	/*int* parr = nullptr;
	parr = arr;
	parr += 1;
	printf("parr=%d\n", *parr);
	parr += 3;
	printf("parr=%d\n", *parr);
	parr += 4;
	printf("parr=%d\n", *parr);
	parr -= 8;
	printf("parr=%d\n", *parr);
	parr += 6;
	printf("parr=%d\n", *parr);
	parr += 3;
	printf("parr=%d\n", *parr);
	parr -= 4;
	printf("parr=%d\n", *parr);
	parr -= 2;
	printf("parr=%d\n", *parr);
	parr -= 1;
	printf("parr=%d\n", *parr);
	parr += 5;
	printf("parr=%d\n", *parr);*/

	/*int arr[10] = { 10,2,78,53,6,33,27,99,7,31 };
	
	for (int i = 0; i < 10; i++)
	{
		int a = i;

			for (int j = i + 1; j < 10; j++)
			{
				if (arr[a] > arr[j])
				{
					a = j;
				}
			}
		int c = arr[i];
		arr[i] = arr[a];
		arr[a] = c;
		printf("%d\n", arr[i]);
	}*/
	
	
//실습
	int arrS[10] = { 2,4,6,3,1,10,45,56,21,7 };

	for (int i = 0; i < 10; i++)
	{
		int max = i;

		for (int j = i + 1; j < 10; j++)
			if (arrS[j] > arrS[i])
				max = j;

		int save = arrS[i];
		arrS[i] = arrS[max];
		arrS[max] = save;

		printf("%d\n", arrS[i]);

	}

	int value = 0;
	printNumber(&value);
	printNumber2(value);

}
