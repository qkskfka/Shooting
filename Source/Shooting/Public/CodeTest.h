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

	//������ ���� number�� �����Ѵ�.
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = CodeVariable)

		int32 number;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Codevarible)
		int32 number2;

	//�Ǽ��� ���� fnumber�� �����Ѵ�.
	float fnumber1;
	float fnumber2 = 10.0;

	//���ڿ� ���� name�� �����Ѵ�.
	FString name;
	FString name2 = FString(TEXT("������"));

	//���� ���� isStudents�� �����Ѵ�.
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
		FString nation = TEXT("�ѱ�");


	// ���ڿ� �ΰ��� �޾Ƽ� ���ڿ� �� ���� ���ļ� ��ȯ�ϴ� �Լ��� ����� �ʹ�.
	FString StringAppender(FString housename, FString faname);

	UPROPERTY(EditAnywhere, Category = CodeVarible)
		FString Firt = "Lee";
	UPROPERTY(EditAnywhere, Category = CodeVarible)
		FString Last = "Jong Chan";


	// �������Ʈ���� ������ �Լ��� ����ϴ� �� 
	/*UPROPERTY(BlueprintCallable)
		FString StringAppender(FString a, FString b);*/
	
	void MultiplicationTable(int32 gugunum);
private:
};
