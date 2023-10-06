#include<stdio.h>
#include<vector>


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


	std::vector<int> vecint1{ 0,1,2,3,4,5,6,7,8,9 };
	std::vector<int>::iterator veciter = vecint1.begin();//vector 포인터 만드는법
	veciter++;
	veciter+=2;
	veciter--;
	printf("veciter=%d\n", *veciter);

	vecint1.push_back(100);//끝에 추가
	for (std::vector<int>::iterator Iter = vecint1.begin(); Iter != vecint1.end(); ++Iter)
	{
		printf("Iter=%d\n", *Iter);
	}

	vecint1.pop_back();//끝에 제거
	veciter = vecint1.begin();
	while (veciter != vecint1.end())
	{
		printf("veciter=%d\n", *veciter);
		veciter++;
	}
		
	veciter = vecint1.begin();
	while (veciter != vecint1.end())
	{
		if (*veciter == 5)
		{
			veciter = vecint1.erase(veciter);//벡터이터가 가리키는 5를 지운다
		}
		else
		{
			veciter++;
		}
		
	}

	veciter = vecint1.begin();
	while (veciter != vecint1.end())
	{
		printf("veciter=%d\n", *veciter);
		veciter++;
	}


	std::vector<int> v;
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
	}
	
}