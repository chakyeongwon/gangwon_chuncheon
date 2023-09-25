#include"money.h"
#include<stdio.h>

static int g_money = 0;

extern int s_money;


//int addMoney(int money)
//{
//	int t_money = 0;//지역변수
//	t_money += money;
//	s_money += money;
//
//	printf("t_money=%d\n", t_money);
//	printf("s_money=%d\n", s_money);
//
//	return 0;
//}
//
//int useMoney(int money)
//{
//	int t_money = 0;//지역변수
//	t_money -= money;
//	s_money -= money;
//
//	printf("t_money=%d\n", t_money);
//	printf("s_money=%d\n", s_money);
//
//	return 0;
//}