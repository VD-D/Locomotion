// Copyright Robert Zygmunt Uszynski 2019-2020

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Enumerations/LocomotionActivity.h"
#include "SetLocomotionActivityNotify.generated.h"

/* Sets the LocomotionActivity on the LocomotionCharacter to NewLocomotionActivity.
 */
UCLASS()
class LOCOMOTION_API USetLocomotionActivityNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	/* Override of Notify which sets LocomotionActivity on the owning LocomotionCharacter. */
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	
	/* The locomotion activity to set. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	ELocomotionActivity LocomotionActivity;
};
