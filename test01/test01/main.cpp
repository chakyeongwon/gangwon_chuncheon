#include<stdio.h>
#include<iostream>


int main()
{

	_wsetlocale(LC_ALL, L"Korean");


	//2�� ��� ����ϱ�(0-100)
	
	/*for (int i = 1; i < 102; ++i)
	{
		if (i % 2 == 0)
			printf("%d\n", i);
	}*/



	//n�� ���� �ϳ��� �Է¹ޱ�
	//n�� ��� ����ϱ�(0-100)
	/*for (int i = 1; i < 102; ++i)
	{
		int n = 3;

		if (i % n == 0)
			printf("%d\n", i);
	}*/



	//(0-100) 2�� ��� ���� ���
	
	
	/*int A = 0;

	for (int i = 1; i < 102; ++i)
	{
		
		if (i % 2 == 0)
			A += 1;
	}

	printf("100���� 2�� ����� ����=%d\n", A);*/




	//abcdef�� ������ ����ϱ�

	/*wchar_t szWChar[20] = L"abcdef";
	int B = wcslen(szWChar);
	

	for (int i = 0; i < B; ++i)
	{
		wprintf(L"������ ����ϱ� = %c\n", szWChar[B - 1 - i]);
	}*/
	



	//wchar_t ������ ���� �Է� �ޱ�

	wchar_t szWCharInput[20] = L"";
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);




	//�Է� ���� ���ڿ����� 'a'���� ���� ���

	int D = wcslen(szWCharInput);
	int DSum = 0;
	for (int i = 0; i < D; ++i)
	{
		if (szWCharInput[i] == 'a')
			DSum += 1;
		else if(szWCharInput[i] == 'b')
			DSum += 1;
	}
	
	printf("���� a,b ����=%d\n", DSum);
	printf("sizeof=%d Byte\n", (unsigned)sizeof(szWCharInput));
	printf("_countof=%d �迭��\n", (unsigned)_countof(szWCharInput));

}