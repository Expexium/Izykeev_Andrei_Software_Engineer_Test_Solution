// RedRuins Softworks (c)


#include "ObjectForReplicationBASE.h"



bool UObjectForReplicationBASE::IsSupportedForNetworking() const
{
	return true;
}

void UObjectForReplicationBASE::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{

	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UObjectForReplicationBASE, BoolVariable);

	DOREPLIFETIME(UObjectForReplicationBASE, VectorVariable);

	DOREPLIFETIME(UObjectForReplicationBASE, FloatVariable);


}


