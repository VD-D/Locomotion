// Copyright Robert Uszynski 2020

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SetCanChangeLocomotionActivity.generated.h"

/* Notify which sets whether or not locomotion activity can be changed for ALocomotionCharacter. */
UCLASS()
class LOCOMOTION_API USetCanChangeLocomotionActivity : public UAnimNotify
{
	GENERATED_BODY()
public:
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	bool bNewCanChangeLocomotionActivity;
};
