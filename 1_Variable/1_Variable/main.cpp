#include<iostream>
#include<stdlib.h>

int main()
{
	char c;//-128-127
	unsigned char uc;//0-255
	c = 128;
	

	//int A;//����,����,���,����(0,1,2,3,4)
	//unsigned int uA;//����,���,����(0,1,2,3,4)

	//float f = 0.1f;//4Byte
	//f = 2.0f;
	//f = 2.f;

	int i2 = 0;
	float f2 = 1.0f;
	i2=(int)f2;

	float divide = 10 / 2.0f;

	int add = 0, minus = 10;
	add++;
	add++;
	++add;

	minus--;
	minus--;
	--minus;

	int addR = 0, addL =0;
	addL = ++add;
	addR = add++;


	//��������
	//&&(and),ll(or),!(not)
	// AND=�� �� ���̸� true, �ϳ��� �ƴϸ� false
	// OR�� �� �߿� �ϳ��� ���̸� true
	// NOT�� ���̸� ����, �����̸� ��
	//yes : 0�� �ƴ� ��, true(1)
	//NO : 0�̸� false(0)

	//bool bResult = true;
	//bool bResult = false;
	//bool bResult = 1;
	bool bResult =0;
	bResult = 20 && 10;
	bResult = 0 || 20;
	bResult = !1;
	bResult = !0;

	//�ּ� : �����Ͽ� ���Ե��� �ʴ� ���ڿ��ν� �ڵ�� �ν����� �ʴ´�.
	/*�ּ� : �����Ͽ� ���Ե��� �ʴ� ���ڿ�*/
	
	//���־��� ����Ű
	//������ ���� �ּ� : Ctrl+k,Ctrl+c
	//������ ���� �ּ� ���� : Ctrl+k,Ctrl+u
	//Alt Drag : �κ� ���� ���� �� Tab���� �̵�����

	//����� ����Ű
	//F5 : ����� ����, ����� ��� ����
	//Shift + F5 : ����� ����
	//F9 : �ߴ��� ���� �� ����
	//F10 : ����� �� ���� ���� ����
	//F11 : ����� �� �Լ� ���� ���� ����

	//�񱳿�����
	//== : ������ true, �ƴϸ� false
	//!= : ������ false, �ƴϸ� true
	// > : ������ �����ʺ��� ũ�� true, �ƴϸ� false
	// >= :������ �����ʺ��� ũ�ų� ������ true, �ƴϸ� false
	// < : ������ �����ʺ��� ������ true, �ƴϸ� false
	// <= :������ �����ʺ��� �۰ų� ������ true, �ƴϸ� false

	bResult = (10 == 11);
	bResult = (10 != 11);
	bResult = (10 >= 11);
	bResult = (10 <= 11);

	int nResult = (10 <= 11) ? 100 : 50;

	//���� : �Ʒ� �� ���� �а� �ð� ���� ���Ͻÿ�.
	unsigned int sec = 987654321;//��

	unsigned int day = 0, hour = 0,	min = 0;
	
	min = sec / 60;
	sec = sec % 60;
	
	hour = min / 60;
	min = min % 60;

	day = hour / 24;
	hour = hour % 24;

	printf("%d %d %d %d",day,hour,min,sec);
	system("pause");
}