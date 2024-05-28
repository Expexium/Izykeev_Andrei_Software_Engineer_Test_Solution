// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TaskZeroFour.generated.h"

UCLASS()
class REDRUINS_TT_2024_API ATaskZeroFour : public ACharacter
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void EnableSubObjectsReplication(bool Enable);

	UFUNCTION(BlueprintCallable)
	void AddSubObjectForReplication(UObject* Object);

};
