#include<stdio.h>
#include<iostream>

class CName
{
public:
	CName(const wchar_t* name): szName(nullptr), len(0)
	{
		len = wcslen(name)+1;
		szName = new wchar_t[len + 1];
		wcscpy_s(szName, len, name);//문자열 copy 방식 // szName=len 이 불가능하기 때문에 쓰이는 명령어(이름,배열수,이름)
	}

	//복사생성자 및 복사 할당 연산자(C++)
	//파라메타로 (const CName& other)와 같이 자신의 클래스 타입을 레퍼런스로 받으면 복사 생성자
	CName(const CName& other) : szName(nullptr), len(0)
	{
		if (szName != nullptr)
		{
			delete[] szName;
		}

		len = wcslen(other.szName) + 1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, other.szName);
	}


	~CName()
	{
		delete[] szName;
	}

	wchar_t* GetName()
	{
		return szName;
	}

	const CName& operator=(const CName& other)
	{
		if (szName != nullptr)
		{
			delete[] szName;
		}

		len = wcslen(other.szName) + 1;
		szName = new wchar_t[len];
		wcscpy_s(szName, len, other.szName);

		/*szName = other.szName;
		len = other.len;*/

		return *this;
	}



	wchar_t* szName;
	size_t len;


};


int main()
{
	_wsetlocale(LC_ALL, L"korean");

	CName name1(L"원태\n");
	CName name2(L"김철수\n");
	

	name1 = name2;

	CName name3 = name1;//복사생성자

	wprintf(L"name1=%s", name1.GetName());
	
}