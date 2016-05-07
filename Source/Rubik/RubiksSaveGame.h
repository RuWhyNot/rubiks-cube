// All right! Yeah

#pragma once

#include "GameFramework/SaveGame.h"
#include "RubiksSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class RUBIK_API URubiksSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	URubiksSaveGame();
	
	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString CurrentCubeCommandsJson;
	
};