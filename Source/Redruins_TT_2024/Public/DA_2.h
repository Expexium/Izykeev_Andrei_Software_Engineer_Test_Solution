// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_2.generated.h"

/**
 * 
 */

class UDA_1;

UENUM(BlueprintType)
enum class ELinkVisibility : uint8
{
	VNone UMETA(DisplayName = "Value_N"),
	VFalse UMETA(DisplayName = "Value_F"),
	VTrue UMETA(DisplayName = "Value_T")
};



UCLASS(BlueprintType)
class REDRUINS_TT_2024_API UDA_2 : public UDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ELinkVisibility CurrentValue;

	    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "CurrentValue == ELinkVisibility::VTrue", EditConditionHides))
		UDA_1* LinkedDA;
		
	
};
