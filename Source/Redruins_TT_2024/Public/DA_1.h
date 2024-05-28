// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_1.generated.h"


/**
 * 
 */

class UDA_2;

USTRUCT(BlueprintType)
struct FSomeStructure
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "DataAsset"))
	TObjectPtr<UDA_2> DataAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "bul"))
	bool bul;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "flot"))
	float flot;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "victor"))
	FVector victor;
};


UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_1 : public UDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSomeStructure ColStruct;
	
};
