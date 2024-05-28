// RedRuins Softworks (c)

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Net/UnrealNetwork.h"
#include "ObjectForReplicationBASE.generated.h"


UCLASS(Blueprintable, BlueprintType)
class REDRUINS_TT_2024_API UObjectForReplicationBASE : public UObject
{
public:
	GENERATED_BODY()

	UFUNCTION()
	virtual bool IsSupportedForNetworking() const override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool BoolVariable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float FloatVariable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	FVector VectorVariable;


	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty> & OutLifetimeProps) const override;


};
