#include<stdio.h>
#include<string>
#include<iostream>
#include<sstream>
#include<vector>

//네임스페이스는 내부 식별자로, 여러개의 라이브러리를 사용할 때
//이름간의 충돌을 방지하기 위해서 사용
using namespace std;
//std 이름 공간을 가져오겠다는 뜻//해당구문을 쓰면 메인에 std를 붙이지 않아도 된다.

int main()
{
	_wsetlocale(LC_ALL, L"korean");

	//string 사용법
	//std::string 변수명("내부값")
	std::string strA("abcdef");

	//sting이 하나의 클래스로서 이미 함수화가 되어 있다. 
	//함수 불러와 사용하면 됨
	
	//프린트 방법: 변수명.c_str()
	printf("strA= %s\n", strA.c_str());
	//문자열크기 구하기(데이터 크기)
	size_t size = strA.capacity();
	//문자열길이 구하기(문자의 개수)
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
		printf("A와 B는 같다.\n");
	}


	wstring wstr(L"123 abc 차경원");//wchar_t 형 string
	wprintf(L"%s\n", wstr.c_str());
	
	auto stringS = "abcdef"s;
	auto stringF = L"123 abcdef 차경원"s;
	printf("%s\n", stringS.c_str()); 
	wprintf(L"%s\n", stringF.c_str());


	double d = 3.14;
	string strD = to_string(d);
	printf("strD=%s\n", strD.c_str());


	string toParse = " 123USD";//띄어쓰기를 맨 앞에 넣어도 stoi는 변수만 출력
	size_t index = 0;

	int Nresult = stoi(toParse, &index);//int형 변수만 반환
	printf("stoi result=%d\n", Nresult);//int인 1,2,3만 출력
	printf("toParse index Charactor=%c\n", toParse[index]);//Parse가 불가능한 시작포인트 출력


	//문자찾기, 문자위치찾기
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

	while (getline(ssTest, line, ','))//,를 기준으로 앞에가 출력됨
	{
		printf("line=%s\n", line.c_str());
	}


	//스트링에서 특정 문자 제거
	//remove(testStr.begin(), testStr.end(), ',');
	testStr.erase(remove(testStr.begin(), testStr.end(), ','), testStr.end());
	printf("testStr=%s\n", testStr.c_str());
}