#include<stdio.h>
#include"Function.h"
#include<iostream>


//함수이름 Sum
//매개변수(파라메타):inta,intb
//반환값 : int
//a와 b를 합한 결과를 반환하시오.

//함수 이름:Minus
//매개변수(파라메타):inta,intb
//반환값 : int
//a와 b를 빼기한 결과를 반환하시오.

//함수 이름:Multy
//매개변수(파라메타):inta,intb
//반환값 : int
//a와 b를 곱하기한 결과를 반환하시오.

//함수 이름:Divide
//매개변수(파라메타):inta,intb
//반환값 : int
//a와 b를 나누기한 결과를 반환하시오.

//함수 이름:Average
//파라메타 int &Sum, int a, int b, intc
//반환값 없음
//레퍼런스 변수 Sum으로 a,b,c의 평균 값을 반환

//함수이름 : ArraySum
//파라메타 int* arr, int length
//반환 값 : int
//배열 "arr"와 배열의 길이 "length"를 파라메타로 받아서 모든 배열의 합을 반환

// 클래스 이름 : CShop
// 맴버 변수 : m_value(기본값:0)
// 맴버 함수 추가 : printValue
// printValue 함수 결과 : "Value=%d"로 m_value 출력

// 클래스 이름 : CPhoneShop
// 부모 클래스 : CShop
// 생성자 파라메타 : int PhoneCnt ( m_PhoneCnt에 값 적용 )
// 생성자 파라메타 : int PhonePrice ( m_PhonePrice에 값 적용 )
// 맴버 변수 : m_PhoneCnt
// 맴버 변수 : m_PhonePrice
// printValue 함수 결과 : "Value=%d"로 m_PhoneCnt * m_PhonePrice출력

//CPhoneShop(10, 100) 생성 후 객체에 printValue 출력

// 클래스 이름 : CFruitShop
// 생성자 파라메타 : int FruitCnt ( m_FruitCnt에 값 적용 )
// 생성자 파라메타 : int FruitPrice ( m_FruitPrice에 값 적용 )
// 부모 클래스 : CShop
// 맴버 변수 : m_FruitCnt
// 맴버 변수 : m_FruitPrice
// printValue 함수 결과 : "Value=%d"로 m_FruitCnt * m_FruitPrice출력

//CFruitShop(10, 100) 생성 후 객체에 printValue 출력

class CShop
{
public:
	int m_value = 0;

	void printValue()
	{
		printf("Value=%d", m_value);
	}

};

class CPhoneShop:public CShop
{
	int m_PhoneCnt;
	int m_PhonePrice;

	CPhoneShop(int PhoneCnt, int PhonePrice):m_PhoneCnt(PhoneCnt), m_PhonePrice(PhonePrice)
	{
		
	}

	

};


void Average(int &Sum, int a, int b, int c)
{
	Sum= (a + b + c) / 3;
}


int ArraySum(int* arr, int length)
{
	int a = 0;
	for (int i = length-1; i >= 0; i--)
	{
		a += arr[i];
	}
		
	return a;

}


int main()
{
	//printf로 'Sum=%d로 Sum함수 결과 출력
	//printf로 'Minus=%d로 Sum함수 결과 출력
	//printf로 'Multy=%d로 Sum함수 결과 출력
	//printf로 'Divide=%d로 Sum함수 결과 출력

	/*int num = 0;
	int C;
	int D;
	float E;
	float F;

	printf("어느 연산을 하시겠습니까?\n0.더하기 1.빼기 2.곱하기 3.나누기\n");
	scanf_s("%d\n", &num);

	switch (num)
	{
	case 0:
		scanf_s("%d %d", &C, &D);
		printf("a+b=%d\n", AddSum(C, D));
		break;
	case 1:
		scanf_s("%d %d", &C, &D);
		printf("a-b=%d\n", Minus(C, D));
		break;
	case 2:
		scanf_s("%d %d", &C, &D);
		printf("a*b=%d\n", Multy(C, D));
		break;
	case 3:
		scanf_s("%f %f", &E, &F);
		printf("a/b=%f\n", Divide(E, F));
		break;
	}*/

	
	int ArrPoint[10] = { 2,4,6,2,5,7,8,9,6,4 };
	int* arr = ArrPoint;
	int c=ArraySum(arr,10);
	printf("ArrPoint의 합=%d\n", c);

	int ReSum;
	Average(ReSum, 10, 20, 30);
	printf("Average=%d\n", ReSum);


	CShop shop;
	shop.printValue();


}