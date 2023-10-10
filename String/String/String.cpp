#include<stdio.h>
#include<string>
#include<iostream>
#include<sstream>
#include<vector>

//���ӽ����̽��� ���� �ĺ��ڷ�, �������� ���̺귯���� ����� ��
//�̸����� �浹�� �����ϱ� ���ؼ� ���
using namespace std;
//std �̸� ������ �������ڴٴ� ��//�ش籸���� ���� ���ο� std�� ������ �ʾƵ� �ȴ�.

int main()
{
	_wsetlocale(LC_ALL, L"korean");

	//string ����
	//std::string ������("���ΰ�")
	std::string strA("abcdef");

	//sting�� �ϳ��� Ŭ�����μ� �̹� �Լ�ȭ�� �Ǿ� �ִ�. 
	//�Լ� �ҷ��� ����ϸ� ��
	
	//����Ʈ ���: ������.c_str()
	printf("strA= %s\n", strA.c_str());
	//���ڿ�ũ�� ���ϱ�(������ ũ��)
	size_t size = strA.capacity();
	//���ڿ����� ���ϱ�(������ ����)
	size_t len = strA.length();
	printf("%d, %d\n", size, len);
	

	string A("ab");
	string B("cd");
	A += B;
	printf("A=%s, B=%s\n", A.c_str(), B.c_str());
	A = B;
	printf("A=%s, B=%s\n", A.c_str(), B.c_str());

	if (A == B)
	{
		printf("A�� B�� ����.\n");
	}


	wstring wstr(L"123 abc �����");//wchar_t �� string
	wprintf(L"%s\n", wstr.c_str());
	
	auto stringS = "abcdef"s;
	auto stringF = L"123 abcdef �����"s;
	printf("%s\n", stringS.c_str()); 
	wprintf(L"%s\n", stringF.c_str());


	double d = 3.14;
	string strD = to_string(d);
	printf("strD=%s\n", strD.c_str());


	string toParse = " 123USD";//���⸦ �� �տ� �־ stoi�� ������ ���
	size_t index = 0;

	int Nresult = stoi(toParse, &index);//int�� ������ ��ȯ
	printf("stoi result=%d\n", Nresult);//int�� 1,2,3�� ���
	printf("toParse index Charactor=%c\n", toParse[index]);//Parse�� �Ұ����� ��������Ʈ ���


	//����ã��, ������ġã��
	int nPoint = toParse.find('S');
	printf("Find Point[%d] Charactor=%c\n", nPoint, toParse[nPoint]);


	string findStr = "123SABC456SORRY";
	int nPointL = findStr.find('S');
	printf("Find Point[%d] Charactor=%c\n", nPointL, findStr[nPointL]);
	int nPointR = findStr.rfind('S');
	printf("Find Point[%d] Charactor=%c\n", nPointR, findStr[nPointR]);


	string strleft = findStr.substr(0, nPointL);
	string strcenter= findStr.substr(nPointL, nPointR- nPointL);
	string strright= findStr.substr(nPointR, findStr.length()- nPointR);
	printf("strleft=%s, strcenter=%s, strright=%s\n", strleft.c_str(), strcenter.c_str(), strright.c_str());


	string testStr = "a,b,c,d,5,6,7,8,9";
	stringstream ssTest(testStr);
	string line;

	printf("%s\n", testStr.c_str());

	while (getline(ssTest, line, ','))//,�� �������� �տ��� ��µ�
	{
		printf("line=%s\n", line.c_str());
	}


	//��Ʈ������ Ư�� ���� ����
	//remove(testStr.begin(), testStr.end(), ',');
	testStr.erase(remove(testStr.begin(), testStr.end(), ','), testStr.end());
	printf("testStr=%s\n", testStr.c_str());
}