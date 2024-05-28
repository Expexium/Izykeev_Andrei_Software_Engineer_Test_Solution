// RedRuins Softworks (c)


#include "TaskZeroFour.h"







void ATaskZeroFour::EnableSubObjectsReplication(bool Enable)
{
	bReplicateUsingRegisteredSubObjectList = Enable;
}

void ATaskZeroFour::AddSubObjectForReplication(UObject* Object)
{
	AddReplicatedSubObject(Object);
}


