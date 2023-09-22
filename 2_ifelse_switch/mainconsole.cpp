// 2_ifelse_switch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>
#include<bitset>

#define LEVEL1_REWARD_10 0b00000001;
#define LEVEL1_REWARD_20 0b00000010;
#define LEVEL1_REWARD_30 0b00000100;
#define LEVEL1_REWARD_40 0b00001000;
#define LEVEL1_REWARD_50 0b00010000;
#define LEVEL1_REWARD_60 0b00100000;



int main()
{
    {
        //int a = 0;
        //std::cin >> a;
        //std::cout << a << "를 입력하셨습니다.";
    }

    {
        /*int a = 0, b = 0;
        scanf_s("%d %d", &a, &b);
        printf("a더하기 b는? %d", a+b);*/

    }


    /*bool bResult = false;

    if (3>=4)

    {
        printf("참이다");

    }
    else

    {
        printf("거짓이다");
    }*/


    //int Score = 0;
    //printf("Score를 입력해주세요:");
    //scanf_s("%d", &Score);

    //
    //if (Score >= 90)
    //{
    //    printf("A학점");
    //}

    //else if(Score >= 80)
    //     
    //{
    //    printf("B학점");
    //}

    //else if (Score >= 70)

    //{
    //    printf("C학점");
    //}
    //else if (Score >= 60)

    //{
    //    printf("D학점");
    //}

    //else if (Score >= 60)

    //{
    //    printf("F학점");
    //}

    //else

    //{
    //    printf("노력하세요");
    //}


    /*int backNumber = 0;
    printf("등번호를 말하세요 : ");
    scanf_s("%d", &backNumber);

    switch (backNumber)

    {
    case 10:
    case 11:
        printf("포수");
        break;

    case 9:
        printf("투수");
        break;

    case 3:
        printf("유격수");
        break;



    default:
        printf("후보");
        break;

    }*/


   /* int light = 0;
    scanf_s("%d", &light);

    switch(light)

    {
    case 0:
        printf("빨강");
        break;
    
    default:
        printf("파랑");
        break;
    }*/



    /*int light = 0;
        scanf_s("%d", &light);

        if (light == false)

        {
            printf("빨강");
        }

        else
        {
            printf("파랑");
        }*/
            


  /*  int ninput = 0;
   scanf_s("%d", &ninput);

   if (ninput >= 100)
   {
       printf("100보다 크거나 같다");
   }

   else
      {
       printf("100보다 작다");
   }*/

    /*int myScore = 0, otherScore = 0;
    scanf_s("%d %d", &myScore, &otherScore);


    if (myScore > otherScore)
    {
        printf("3점 획득");
    }

    else if(myScore == otherScore)
    {
        printf("1점 획득");
    }

    else
    {
        printf("0점");
    }*/




    /*int nCode = 0;
    scanf_s("%d", &nCode);

    switch (nCode)

    {
    case 1:
    case 3:
        printf("남자");
        break;

    case 2:
    case 4:
        printf("여자");
     
        break;

    default:
        printf("잘못 입력하셨습니다");
        break;
    }*/




    /*int nCode2 = 0;
    scanf_s("%d", &nCode2);

    switch (nCode2)

    {
    case 1:
    case 2:
        printf("2000년 이전 출생");
        break;

    case 3:
    case 4:
        printf("2000년 이후 출생");

        break;
    
    default:
        printf("잘못 입력하셨습니다");
        break;
    }*/


    /*int A = 0b01011101;
    int B = 0123;
    int C = 0xFF;
    printf("2진법(0b01011101) : %d\n", A);
    printf("8진법(0123) : %d\n", B);
    printf("16진법(0xFF) : %d\n", C);*/


//char bitNum = 0b01001010;
//char bitResult = 0;
//
//
//bitResult = bitNum & 0b11010100;
//std::cout << std::bitset<8>(bitResult) << std::endl;
//
//bitResult = bitNum | 0b11010100;
//std::cout << std::bitset<8>(bitResult) << std::endl;
//
//bitResult = bitNum ^ 0b11010100;
//std::cout << std::bitset<8>(bitResult) << std::endl;
//
//bitResult = ~ 0b11010100;
//std::cout << std::bitset<8>(bitResult) << std::endl;
//
//
////10레벨 달성보상
//bool isGetLevel10Reward = false;
////20레벨 달성보상
//bool isGetLevel20Reward = false;
////30레벨 달성보상
//bool isGetLevel30Reward = false;
////40레벨 달성보상
//bool isGetLevel40Reward = false;
////50레벨 달성보상
//bool isGetLevel50Reward = false;
////60레벨 달성보상
//bool isGetLevel60Reward = false;


    char MyReward = 0b00111101;

    MyReward = MyReward | LEVEL1_REWARD_20;
    std::cout << "MyReward ="<<std::bitset<8>(MyReward) << std::endl;


    bool isEnable = false;
    isEnable = MyReward & LEVEL1_REWARD_20;
    std::cout << "MyReward Check =" << isEnable << std::endl;

    MyReward = MyReward & ~LEVEL1_REWARD_20;
    std::cout << "MyReward reset=" << std::bitset<8>(MyReward) << std::endl;



}
