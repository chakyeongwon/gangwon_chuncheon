#include<stdio.h>
#include<iostream>

class CName
{
public:
	CName(const wchar_t* name): szName(nullptr), len(0)
	{
		len = wcslen(name)+1;
		szName = new wchar_t[len + 1];
		wcscpy_s(szName, len, name);//���ڿ� copy ��� // szName=len �� �Ұ����ϱ� ������ ���̴� ��ɾ�(�̸�,�迭��,�̸�)
	}

	//��������� �� ���� �Ҵ� ������(C++)
	//�Ķ��Ÿ�� (const CName& other)�� ���� �ڽ��� Ŭ���� Ÿ���� ���۷����� ������ ���� ������
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

	CName name1(L"����\n");
	CName name2(L"��ö��\n");
	

	name1 = name2;

	CName name3 = name1;//���������

	wprintf(L"name1=%s", name1.GetName());
	
}