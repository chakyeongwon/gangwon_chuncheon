#include <stdio.h>
#include <iostream>

//int cSum(int a, int b) {
//    return a + b;
//}
//
//int cMinus(int a, int b) {
//    return a - b;
//}
//
//int cMulti(int a, int b) {
//    return a * b;
//}
//
//float cDivide(float a, float b) {
//    return a / b;
//}
//
//enum InputType
//{
//    Quit = 0,
//    Sum,
//    Minus,
//    Multi,
//    Divide
//};
//
//void ScanfinputNum(int& a, int& b)
//{
//    printf("\n���� �ϳ��� �Է��ϼ���:");
//    scanf_s("%d", &a);
//    printf("\n���� �ϳ� �� �Է��ϼ���:");
//    scanf_s("%d", &b);
//}


float standardWeight(float height)
{
    int A=(height - 100) * 0.9;
    return A;
}

float GetBMI(float weight, float standardWeight)
{
    int B= (weight - standardWeight) * 100 / standardWeight;
    return B;
}


void FailNumber()
{
    printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.(���� '-'����, OOOOOO O******)\n\n");
}


int main()
{
   
    //bool NumInput = true;

    //while (NumInput)
    //{
    //    int Num1;
    //    int Num2;
    //    int Num3;
    //    int Num4;

    //    printf("[�ֹι�ȣ ��� �ý���]\n");
    //    printf("�ֹι�ȣ �� ù°�ڸ����� �Է����ּ���.(���� '-'����, OOOOOO O******)\n");
    //    scanf_s("%02d%02d%02d%01d", &Num1, &Num2, &Num3, &Num4);
    //    //printf("%d%d%d-%d******\n", Num1, Num2, Num3, Num4);

    //    if (Num2 > 12)
    //    {
    //        FailNumber();
    //    }
    //    else if (Num3 > 31)
    //    {
    //        FailNumber();
    //    }
    //    else if (Num4 > 4)
    //    {
    //        FailNumber();
    //    }

    //    else
    //    {
    //        if (Num4 == 1 || Num4 == 3)
    //        {
    //            printf("%d�� %d�� %d�� ����\n\n", Num1, Num2, Num3);
    //        }
    //        else if (Num4 == 2 || Num4 == 4)
    //        {
    //            printf("%d�� %d�� %d�� ����\n\n", Num1, Num2, Num3);
    //        }
    //    }
    //}



     
   /*int Bnum1 = 0;
   int Bnum2 = 0;
    
   scanf_s("%06d%07d", &Bnum1, &Bnum2);
   printf("%06d-%07d\n", Bnum1, Bnum2);*/
   
   


    bool BMIinput = true;

    while (BMIinput)
    {
        
        int Button = 0;

        printf("BMI�� ����Ͻðڽ��ϱ�?\n0:No, 1:Yes\n");
        scanf_s("%d", &Button);

        switch (Button)
        {
        case 0:
        {
            BMIinput = false;
            break;
        }
        case 1:
        {
            int BMIheight = 0;
            int BMIweight = 0;
            int BMIResult = 0;

            printf("Ű�� �Է����ּ���\n");
            scanf_s("%d", &BMIheight);
            printf("�����Ը� �Է����ּ���\n");
            scanf_s("%d", &BMIweight);
            BMIResult = GetBMI(BMIweight, standardWeight(BMIheight));

            if (BMIResult <= 10)
            {
                printf("����\n");
            }
            else if (BMIResult > 10 && BMIResult <= 20)
            {
                printf("��ü��\n");
            }
            else if (BMIResult > 20)
            {
                printf("��\n");
            }
        }
        }
                        

    }





    /*bool SInput = true;

    while (SInput)
    {
        int sNum = 0;
        printf("�ҵ漼�� ����Ͻðڽ��ϱ�?\n0:No, 1:Yes\n");
        scanf_s("%d", &sNum);
        

        switch (sNum)
        {
        case 0:
            SInput = false;
            break;
        case 1:
            int Money = 0;
            printf("���� �� �ҵ��� �Է��ϼ���(�� ����):\n");
            scanf_s("%d", &Money);
            system("cls");
            int per = 0;

            if (Money > 100000)
            {
                per = 45;
            }
            else if (50000< Money && Money <= 100000)
            {
                per = 42;
            }
            else if (30000< Money && Money <= 50000 )
            {
                per = 40;
            }
            else if (15000< Money && Money <= 30000)
            {
                per = 38;
            }
            else if (8800< Money && Money <= 15000)
            {
                per = 35;
            }
            else if (4600< Money && Money <= 8800)
            {
                per = 24;
            }
            else if (1200< Money && Money <= 4600)
            {
                per = 15;
            }
            else if (Money <= 1200)
            {
                per = 6;
            }
            printf("����� �ҵ漼�� %d�ۼ�Ʈ �Դϴ�.\n", per);
        }
    }*/
    





    /*bool nInput = true;
    while (nInput)
    {
        int A = 0;
        int B = 0;
        
        printf("[�Է��� �� �� ������ ��� ���� ���ϱ� ���α׷�]\n");
        printf("���� �ϳ��� �Է��ϼ���.\n");
        scanf_s("%d", &A);
        printf("���� �ϳ��� �� �Է��ϼ���.\n");
        scanf_s("%d", &B);
        system("cls");

        int nResult = 0;
        if (A < B)
        {
            for (int i = A; i <= B; ++i)
            {
                nResult += i;
            }
            printf("���=%d\n", nResult);
        }
        else if (B < A)
        {
            for (int i = B; i <= A; ++i)
            {
                nResult += i;
            }
            printf("���=%d\n", nResult);
        }
        

    }*/







   
    //bool bRun = true;

    //while (bRun)
    //{
    //    InputType nInput = InputType::Quit;
    //    int a = 0, b = 0;
    //    printf("� ������ �Ͻðڽ��ϱ�? 0)���� 1)���ϱ� 2)���� 3)���ϱ� 4)������ : ");
    //    scanf_s("%d", &nInput);

    //    system("cls");//���� ����Ʈ �� �κ��� �ѹ� ��µ� �ڿ� ������

    //    switch (nInput)
    //    {
    //    case InputType::Quit:
    //        bRun = false;
    //        break;

    //    case InputType::Sum:
    //        ScanfinputNum(a, b);
    //        printf("\nSum ����� %d �Դϴ�.\n", cSum(a, b));
    //        break;

    //    case InputType::Minus:
    //        ScanfinputNum(a, b);
    //        printf("\nMinus ����� %d �Դϴ�.\n", cMinus(a, b));
    //        break;

    //    case InputType::Multi:
    //        ScanfinputNum(a, b);
    //        printf("\nMulti ����� %d �Դϴ�.\n", cMulti(a, b));
    //        break;

    //    case InputType::Divide:
    //        ScanfinputNum(a, b);
    //        printf("\nDivide ����� %f �Դϴ�.\n", cDivide(a, b));
    //        break;

    //    default:
    //        break;
    //    }
    //}





}