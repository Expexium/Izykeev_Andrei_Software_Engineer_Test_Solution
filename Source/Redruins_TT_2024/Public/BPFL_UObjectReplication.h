// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Net/UnrealNetwork.h"
#include "BPFL_UObjectReplication.generated.h"

/**
 * 
 */
UCLASS()
class REDRUINS_TT_2024_API UBPFL_UObjectReplication : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	void EnableSubObjectReplication(AActor* Actor, bool Enable);
	
};

