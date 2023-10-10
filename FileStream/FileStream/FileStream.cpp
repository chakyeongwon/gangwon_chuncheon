#include<stdio.h>
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>


using namespace std;

struct stTest
{
	string m_name = "";
	int m_math = 0;
	int m_eng = 0;
	int m_lang = 0;

	stTest(string name, int math, int eng, int lang) :
		m_name(name), m_math(math), m_eng(eng), m_lang(lang)
	{

	}

	void printTest()
	{
		printf("name=%s. math=%d, eng=%d, lang=%d\n", m_name.c_str(), m_math, m_eng, m_lang);
	}

};

void pushStTest(vector<stTest>vecTest, string& str)
{
	stringstream ssTest(str);
	string line;

	while (getline(ssTest, line, ','))//,를 기준으로 앞에가 출력됨
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end());
		printf("[%s]\n", line.c_str());

	}

	

}


int main()
{

	_wsetlocale(LC_ALL, L"korean");

	//txt 파일 생성하기//
	/*std::ofstream writeFile;
	writeFile.open("test.txt");

	std::string strTest="test 1234 abcd 입니다.";
	writeFile.write(strTest.c_str(), strTest.size());

	writeFile.close();*/

	//파일읽기
	std::ifstream readFile;
	readFile.open("test.txt");

	//stTest test;
	//if (readFile.is_open())
	//{		
	//	while (!readFile.eof())
	//	{
	//		std::string  str;
	//		std::getline(readFile, str);//readFile의 텍스트를 한 줄 읽어서 str에 넣는다.
	//		printf("str=%s\n", str.c_str());

	//		int center = str.find('=');

	//		std::string nResult = str.substr(0, center);
	//		printf("%s\n", nResult.c_str());

	//		std::string aaa = str.substr(center + 1, str.length() - center + 1);
	//		size_t index = 0;
	//		int Nresult = stoi(aaa, &index);
	//		
	//		if (nResult == "a")
	//		{
	//			test.a = Nresult;
	//		}
	//		else if (nResult == "b")
	//		{
	//			test.b = Nresult;
	//		}
	//	}
	//	readFile.close();
	//	test.printTest();
	//}
	

	

	vector<stTest>vecTest;
	/*stTest aaa("aaa", 80,60,70);
	vecTest.push_back(aaa);
	stTest bbb("bbb", 90, 30, 40);
	vecTest.push_back(bbb);
	stTest ccc("ccc", 20, 90, 80);
	vecTest.push_back(ccc);*/

	if (readFile.is_open())
	{
		while (!readFile.eof())
		{
			std::string  str;
			std::getline(readFile, str);//readFile의 텍스트를 한 줄 읽어서 str에 넣는다.
			//printf("str=%s\n", str.c_str());
			
			pushStTest(vecTest,str);
						
			int center = str.find('=')+1;
			string Name = str.substr(center, str.length() - center);

			if (Name == "aaa")
			{
				
			}
			else if (Name == "math")
			{

			}
			else if (Name == "eng")
			{

			}
			else if (Name == "lang")
			{

			}


		}
		readFile.close();
	}

	for (stTest& test : vecTest)
	{
		test.printTest();
	}



}