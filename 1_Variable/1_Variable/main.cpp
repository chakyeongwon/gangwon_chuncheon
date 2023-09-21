#include<iostream>
#include<stdlib.h>

int main()
{
	char c;//-128-127
	unsigned char uc;//0-255
	c = 128;
	

	//int A;//숫자,음수,양수,정수(0,1,2,3,4)
	//unsigned int uA;//숫자,양수,정수(0,1,2,3,4)

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


	//논리연산자
	//&&(and),ll(or),!(not)
	// AND=둘 다 참이면 true, 하나라도 아니면 false
	// OR는 둘 중에 하나라도 참이면 true
	// NOT은 참이면 거짓, 거짓이면 참
	//yes : 0이 아닌 값, true(1)
	//NO : 0이면 false(0)

	//bool bResult = true;
	//bool bResult = false;
	//bool bResult = 1;
	bool bResult =0;
	bResult = 20 && 10;
	bResult = 0 || 20;
	bResult = !1;
	bResult = !0;

	//주석 : 컴파일에 포함되지 않는 문자열로써 코드로 인식하지 않는다.
	/*주석 : 컴파일에 포함되지 않는 문자열*/
	
	//자주쓰는 단축키
	//지정한 구문 주석 : Ctrl+k,Ctrl+c
	//지정한 구문 주석 해제 : Ctrl+k,Ctrl+u
	//Alt Drag : 부분 영역 지정 후 Tab으로 이동가능

	//디버깅 단축키
	//F5 : 디버깅 시작, 디버깅 계속 진행
	//Shift + F5 : 디버깅 종료
	//F9 : 중단점 생성 및 해제
	//F10 : 디버깅 중 다음 구문 진행
	//F11 : 디버깅 중 함수 내부 구문 진행

	//비교연산자
	//== : 같으면 true, 아니면 false
	//!= : 같으면 false, 아니면 true
	// > : 왼쪽이 오른쪽보다 크면 true, 아니면 false
	// >= :왼쪽이 오른쪽보다 크거나 같으면 true, 아니면 false
	// < : 왼쪽이 오른쪽보다 작으면 true, 아니면 false
	// <= :왼쪽이 오른쪽보다 작거나 같으면 true, 아니면 false

	bResult = (10 == 11);
	bResult = (10 != 11);
	bResult = (10 >= 11);
	bResult = (10 <= 11);

	int nResult = (10 <= 11) ? 100 : 50;

	//문제 : 아래 초 값의 분과 시간 값을 구하시오.
	unsigned int sec = 987654321;//초

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