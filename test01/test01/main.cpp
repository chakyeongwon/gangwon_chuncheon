#include<stdio.h>
#include<iostream>


int main()
{

	_wsetlocale(LC_ALL, L"Korean");


	//2의 배수 출력하기(0-100)
	
	/*for (int i = 1; i < 102; ++i)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/



	//n은 숫자 하나를 입력받기
	//n의 배수 출력하기(0-100)
	/*for (int i = 1; i < 102; ++i)
	{
		int n = 3;

		if (i % n == 0)
			printf("%d\n", i);
	}*/



	//(0-100) 2의 배수 갯수 출력
	
	
	/*int A = 0;

	for (int i = 1; i < 102; ++i)
	{
		
		if (i % 2 == 0)
			A += 1;
	}

	printf("100까지 2의 배수의 개수=%d\n", A);*/




	//abcdef를 역으로 출력하기

	/*wchar_t szWChar[20] = L"abcdef";
	int B = wcslen(szWChar);
	

	for (int i = 0; i < B; ++i)
	{
		wprintf(L"역으로 출력하기 = %c\n", szWChar[B - 1 - i]);
	}*/
	



	//wchar_t 형으로 문자 입력 받기

	wchar_t szWCharInput[20] = L"";
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);




	//입력 받은 문자열에서 'a'문자 갯수 출력

	int D = wcslen(szWCharInput);
	int DSum = 0;
	for (int i = 0; i < D; ++i)
	{
		if (szWCharInput[i] == 'a')
			DSum += 1;
		else if(szWCharInput[i] == 'b')
			DSum += 1;
	}
	
	printf("문자 a,b 개수=%d\n", DSum);
	printf("sizeof=%d Byte\n", (unsigned)sizeof(szWCharInput));
	printf("_countof=%d 배열수\n", (unsigned)_countof(szWCharInput));

}