// Fill out your copyright notice in the Description page of Project Settings.


#include "CodeTest.h"



// 기본 값을 설정할 수 있다.
// 생성자 함수
ACodeTest::ACodeTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}




// Called when the game starts or when spawned
void ACodeTest::BeginPlay()
{
	Super::BeginPlay();

	
	/*
	//Add 함수에 입력값 8, 4를 넣어서 결과를 result 변수에 받는다.
	int32 result1 = Add(8, 4);
	int32 result2 = Subtract(8, 4);
	int32 result3 = Multiply(8, 4);
	float result4 = Divide(4, 8);
	
	// result 변수에 있는 값을 화면에 출력한다.
	UE_LOG(LogTemp, Warning, TEXT("Result1 : %d"), result1);
	UE_LOG(LogTemp, Warning, TEXT("Result2 : %d"), result2);
	UE_LOG(LogTemp, Warning, TEXT("Result3 : %d"), result3);
	UE_LOG(LogTemp, Warning, TEXT("Result4 : %.1f"), result4);
	*/

	/*만일, 나이가 30살 이상이면 "할배"라고 출력하고 싶다.
	if (age >= 30)
	{
		UE_LOG(LogTemp, Warning, TEXT("할배시군요"));
	}
	 그렇지 않고 만일, 나이가 20살 이상이면 "꼰대"라고 출력하고 싶다.
	else if (age >= 20)
	{
		UE_LOG(LogTemp, Warning, TEXT("꼰대시군요"));
	}

	 그렇지 않다면, "꼬맹이"라고 출력하고 싶다.
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("잼민이네"));
	}*/

	////만일 나이가 20살 이상이면서 키가 160이상인 경우에는 
	//if (age >= 20 || height >= 160)
	//{
	//	// "환영"이라고 출력한다.
	//	UE_LOG(LogTemp, Warning, TEXT("환영합니다."));
	//}
	//
	////그렇지 않으면,
	//else
	//{
	//	//"외면"이라고 출력한다.
	//	UE_LOG(LogTemp, Warning, TEXT("실례했습니다."));
	//}
	

	
	// 문자열 앞은 * 한글일때는 앞에 TEXT로 감싼다 TEXT("한글")
	FString house = StringAppender("Lee", "Jongchan");
	UE_LOG(LogTemp, Warning, TEXT("%s"), *house);
	
	//// 2로나눈 나머지가 0이면 짝수, 조건문
	//int32 checker=123;
	//if (checker%2 == 0)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("even"));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("odd"));
	//}
	
	//if (nation == TEXT ("한국") && age >= 20 && age < 40)
	//{
	//	// 만일 국적이 "한국"이면서
	//	// 나이가 20살 이상 40세 미만이면 "청년"이라고 출력한다.
	//	UE_LOG(LogTemp, Warning, TEXT("청년"));
	//}
	//
	//// 그 밖에는
	//else 
	//{
	//	// "청년 아님"이라고 출력한다.
	//	UE_LOG(LogTemp, Warning, TEXT("청년아님"));
	//}

	//반복문
	//"안녕하세요"라는 문자열을 10번 출력한다.
	//for (int32 i = 0; i < 10; i = i + 1)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("%d"), i+1);
	//}

	//int32 num = 3;
	//// 자기 자신에게 2를 더해라
	//num += 2;
	//// num 값을 1을 증가시켜라
	//num++;
	//// num 값을 먼저 1 증가시켜라 
	//++num;

	//int32 num = 3;
	//int32 temp = 2;
	//int32 sum = temp + num++;

	//반복문 구구단 7단
	
	for (int32 i = 2; i < 10; i++)
	{
		for (int32 j = 1; j < 10; j++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d * %d = %d"), i, j, i * j);
		}
		UE_LOG(LogTemp, Warning, TEXT("================="));
	}
	/*
	void ACodeTest::MultiplicationTable(int32 gugunum)
	{
		for (int32 i = 1; i < 10; i++)
		{
			UE_LOG(LogTemp, Warning, TEXT("%d * %d = %d"), gugunum, i, gugunum*i );
		}
	}*/

}

	// number 변수에 3을 넣는다.
	//number = 3;
	//number2 = number;
	//number2 = -7;

	//fnumber1 = 3.14f;

	//number의 값을 output 콘솔 창에 출력한다.
	//UE_LOG(LogTemp, Warning, TEXT("number1 is %d, number2 is %d"), number, number2);
	//UE_LOG(LogTemp, Warning, TEXT("float number is %.2f"), fnumber1);
	//UE_LOG(LogTemp, Warning, TEXT("Hello World! 가나다라"), *name2);
	/*
	if (isTeacher == true)
	{
		UE_LOG(LogTemp, Warning, TEXT("true"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("false"));
	}
	*/

// Called every frame
void ACodeTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

//int32 ACodeTest::Add(int32 num1, int32 num2)
//{
//	// to do 
//	return num1 + num2;
//}int32 ACodeTest::Subtract(int32 num1, int32 num2)
//{
//	// to do 
//	return num1 - num2;
//}int32 ACodeTest::Multiply(int32 num1, int32 num2)
//{
//	// to do 
//	return num1 * num2;
//}float ACodeTest::Divide(float num1, float num2)
//{
//	// to do 
//	return num1 / num2;
//}

// 성과 이름을 받아서 둘을 합친 성명을 반환하는 함수
FString ACodeTest::StringAppender(FString housename, FString faname)
{
	return housename + faname;
}


