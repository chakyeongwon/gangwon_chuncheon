#include<stdio.h>
#include<vector>
#include<list>


struct stMonster
{
	int index = 0;


};

bool IsFindMonIndex(const stMonster& mon)
{
	return mon.index == 3;//mon 인덱스가 3이면 true, 아니면 false 반환
}


int main()
{
	//std::vector<int> vecint{ 0,1,2,3,4 };//벡터 배열 만드는 법
	//int vectorSize = vecint.size();
	//int vec0 = vecint[0];

	//int* pData = vecint.data();
	//int vcap = vecint.capacity();
	//printf("vecint capacity=%d\n", vcap);


	//for (int i = 0; i < vectorSize; i++)
	//{
	//	printf("vecint[%d]=%d\n", i, vecint[i]);
	//}

	//for (int value : vecint)
	//{
	//	value = 2;
	//	printf("vecint=%d\n", value);
	//}

	//for (const int& value : vecint)
	//{
	//	//value=2; const이기 때문에 변경불가
	//	printf("vecint=%d\n", value);
	//}
	//
	//for (int& value : vecint)
	//{
	//	value = 1;
	//	printf("Refvecint=%d\n", value);
	//}

	//for (const int& value : vecint)
	//{
	//	//value=2; const이기 때문에 변경불가
	//	printf("vecint=%d\n", value);
	//}


	//std::vector<int> vecint1{ 0,1,2,3,4,5,6,7,8,9 };
	//std::vector<int>::iterator veciter = vecint1.begin();//vector 포인터 만드는법
	//veciter++;
	//veciter+=2;
	//veciter--;
	//printf("veciter=%d\n", *veciter);

	//vecint1.push_back(100);//끝에 추가
	//for (std::vector<int>::iterator Iter = vecint1.begin(); Iter != vecint1.end(); ++Iter)
	//{
	//	printf("Iter=%d\n", *Iter);
	//}

	//vecint1.pop_back();//끝에 제거
	//veciter = vecint1.begin();
	//while (veciter != vecint1.end())
	//{
	//	printf("veciter=%d\n", *veciter);
	//	veciter++;
	//}
	//	
	//veciter = vecint1.begin();
	//while (veciter != vecint1.end())
	//{
	//	if (*veciter == 5)
	//	{
	//		veciter = vecint1.erase(veciter);//벡터이터가 가리키는 5를 지운다
	//	}
	//	else
	//	{
	//		veciter++;
	//	}
	//	
	//}

	//veciter = vecint1.begin();
	//while (veciter != vecint1.end())
	//{
	//	printf("veciter=%d\n", *veciter);
	//	veciter++;
	//}


	/*std::vector<int> v;
	for (int i = 0; i < 15; i++)
	{
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); ++i)
	{
		printf("v[%d]=%d\n",i, v[i]);
	}

	v.pop_back();
	v.erase(v.begin(), v.begin() + 5);
	for (int i = 0; i < v.size(); ++i)
	{
		printf("v[%d]=%d\n", i, v[i]);
	}*/
	

	//std::list<int> listint{ 0,1,2,3,4 };
	////for문은 안되고, for each는 됨
	//for (int value : listint)
	//{
	//	value = 0;
	//	printf("listint=%d\n", value);
	//}

	//for (int value : listint)
	//{
	//	printf("listint=%d\n", value);
	//}

	///*for (int& value : listint)
	//{
	//	value = 0;
	//	printf("listint=%d\n", value);
	//}*/

	//for (int value : listint)
	//{
	//	printf("listint=%d\n", value);
	//}

	//for (const int& value : listint)
	//{
	//	//value = 0;
	//	printf("listint=%d\n", value);
	//}


	/*std::list<int>::iterator listiter = listint.begin();
	printf("\nlistiter=%d\n", *listiter);
	for (std::list<int>::iterator i = listint.begin() ; i != listint.end(); ++i)
	{
		printf("\nlistiter[]=%d\n", *i);
	}*/


	std::list<int> listint2{ 20,43,67,2,98 };
	/*listint2.push_back(100);
	listint2.push_front(200);

	for (const int& value : listint2)
	{
		printf("listint2=%d\n", value);
	}

	listint2.pop_back();
	listint2.pop_front();

	for (const int& value : listint2)
	{
		printf("listint2=%d\n", value);
	}*/
	
	//std::list<int>::iterator it = std::find(listint2.begin(), listint2.end(), 43);
	//if (it != listint2.end())
	//{
	//	printf("listint2=%d\n", *it);
	//	//listint2.erase(it);//특정원소 제거
	//	listint2.insert(it, 2000);//검색한 배열값 앞에 특정값 끼워넣기
	//	listint2.emplace(it, 2001);//검색한 배열값 앞에 특정값 끼워넣기
	//}
	//else
	//{
	//	printf("listint2=fail\n");
	//}

	//for (const int& value : listint2)
	//{
	//	printf("listint2=%d\n", value);
	//}


	std::list<stMonster> arrMon;

	for (int i = 0; i < 5; ++i)
	{
		stMonster temp;
		temp.index = i;
		arrMon.push_back(temp);
	}
	
	for (const stMonster& value : arrMon)
	{
		printf("Monster index=%d\n", value.index);
	}

	std::list<stMonster>::iterator moniter;
	//moniter = std::find_if(arrMon.begin(), arrMon.end(), IsFindMonIndex);
	moniter = std::find_if(arrMon.begin(), arrMon.end(), [](const stMonster& mon){ return mon.index == 12; });//함수를 직접 이름 없이 만들어서 찾기 진행함

	
	if (moniter != arrMon.end())
	{
		printf("moniter index=%d\n", moniter->index);
	}
	else
	{
		printf("moniter find fail\n");
	}
	

}