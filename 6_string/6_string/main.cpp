#include<stdio.h>
#include<iostream>
#include<assert.h>


unsigned int GetString_ength(const wchar_t* _pString)
{
	int i = 0;

	while (1)
	{
		wchar_t c = *(_pString + i);//해당 위치값의 변수를 더해주는 구문

		if (c =='\0')
		{
			break;
		}
		++i;
	}
	return i;
}

//_Dest : "abcde"
//_pSource : "fghi"
void StringCar(wchar_t* _Dest, unsigned int size, const wchar_t* _pSource)
{
	int F = wcslen(_Dest);
	int G = wcslen(_pSource);
	/*
	if (size < F + G + 1)
	{
		assert
	}*/
		for (int i=0;i<G+1;++i)
		{
			_Dest[F + i] = _pSource[i];
		}
			
}


int StringCmp(const wchar_t* _pLeft, const wchar_t* _pRight)
{
	int LL = wcslen(_pLeft);
	int LR = wcslen(_pRight);
	int nLoop = (LL < LR) ? LL : LR;

	for (int i = 0; i < nLoop; i++)
	{
		if (_pLeft[i] < _pRight[i])
			continue;
		return(_pLeft[i] > _pRight[i]) ? 1 : -1;
	}

	if (LL != LR)
	{
		return(LL >LR) ? 1 : -1;
	}
	return 0;

}

int StringCmp2(const wchar_t* _pLeft, const wchar_t* _pRight)
{
	int LL = wcslen(_pLeft);
	int LR = wcslen(_pRight);

	if (LL == LR)
		for (int i = 0; i < LL; ++i)
		{
			return (_pLeft[i] < _pRight[i]) ? -1 : +1;
		}
	else
		return (LL < LR) ? -1 : +1;

}


int main()
{
	setlocale(LC_ALL, "korean");
	_wsetlocale(LC_ALL, L"korean");


	char c1 = 'a';
	printf("c1=%c\n", c1);

	char arrC1[10] = "abc한글";
	printf("arrC1=%s\n", arrC1);

	wchar_t wc1 = L'a';
	wprintf(L"wc1=%c\n", wc1);
	wchar_t arrWC1[10] = L"abc한글";
	wprintf(L"arrWC1=%s\n", arrWC1);

	wchar_t szWChar[10] = L"abcdefghi";
	wprintf(L"szWChar=%s\n", szWChar);

	wchar_t szWCharLen[20] = L"abcdefg";
	int size = wcslen(szWCharLen);


	size = GetString_ength(szWCharLen);
	printf("szWCharLen size=%d\n", size);


	wcscat_s(szWCharLen, 20, L"hif");
	size = wcslen(szWCharLen);
	printf("szWCharLen size=%d\n", size);
	wprintf(L"szWCharLen=%s\n", szWCharLen);


	wchar_t _Dest[20] = L"abcde";
	wchar_t _pSource[20] = L"fghi";
	StringCar(_Dest, 20, _pSource);
	size = GetString_ength(_Dest);
	printf("_Dest size=%d\n", size);
	wprintf(L"_Dest=%s\n", _Dest);


	/*int nResult = wcscmp(L"abcde", L"abcde");
		printf("nResult=%d\n", nResult);
	int sResult = wcscmp(L"abcdef", L"abcde");
		printf("sResult=%d\n", sResult);
	int vResult = wcscmp(L"abcde", L"abcdef");
		printf("vResult=%d\n", vResult);
	int aResult = wcscmp(L"cbcde", L"abcde");
		printf("aResult=%d\n", aResult);
	int bResult = wcscmp(L"abcde", L"cbcde");
		printf("bResult=%d\n", bResult);*/


		
	int cResult= StringCmp2(L"abcde", L"abcdef");
	printf("cResult=%d\n", cResult);

}