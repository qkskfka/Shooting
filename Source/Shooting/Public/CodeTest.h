// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeTest.generated.h"

UCLASS()
class SHOOTING_API ACodeTest : public AActor
{
	GENERATED_BODY()

		

		
public:
	// Sets default values for this actor's properties
	ACodeTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//정수형 변수 number를 선언한다.
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = CodeVariable)

		int32 number;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Codevarible)
		int32 number2;

	//실수형 변수 fnumber를 선언한다.
	float fnumber1;
	float fnumber2 = 10.0;

	//문자열 변수 name을 선언한다.
	FString name;
	FString name2 = FString(TEXT("이종찬"));

	//논리형 변수 isStudents를 선언한다.
	bool isStudendt;
	//bool isStudendt = false;
	bool isTeacher = true;

	int32 Add(int32 number1, int32 number2);
	int32 Subtract(int32 number1, int32 number2);
	int32 Multiply(int32 number1, int32 number2);
	float Divide(float number1, float number2);

	UPROPERTY(EditAnywhere, Category = CodeVarible)
		int32 age = 20;

	/*UPROPERTY(EditAnywhere, Category = CodeVarible)
	int32 height = 20;*/

	UPROPERTY(EditAnywhere, Category = CodeVarible)
		FString nation = TEXT("한국");


	// 문자열 두개를 받아서 문자열 한 개로 합쳐서 반환하는 함수를 만들고 싶다.
	FString StringAppender(FString housename, FString faname);

	UPROPERTY(EditAnywhere, Category = CodeVarible)
		FString Firt = "Lee";
	UPROPERTY(EditAnywhere, Category = CodeVarible)
		FString Last = "Jong Chan";


	// 블루프린트에서 선언한 함수를 사용하는 것 
	/*UPROPERTY(BlueprintCallable)
		FString StringAppender(FString a, FString b);*/
	
	void MultiplicationTable(int32 gugunum);
private:
};
