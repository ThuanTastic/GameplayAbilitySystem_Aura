#pragma once
 
#include "CoreMinimal.h"
#include "AuraDelegates.generated.h"
 
// NOTE: As this file is missing any USTRUCT()/UCLASS() and it includes dynamic (reflected) delegate declarations,
// we must add UDELEGATE() to one of them, so the UHT recognizes these declarations (known UHT limitation).
UDELEGATE()
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttributeChangedSignature, float, NewValue);

//I argue that creating a new delegate name for OnXPPercentChangedDelegate (instead of using FOnAttributeChangedSignature) can be beneficial,
//because when you perform a project-wide lookup for a specific delegate name (or any other type really),
//you expect to only get the relevant variables and functions using it, otherwise, you will be unnecessarily confused.