// Copyright Robert Zygmunt Uszynski 2019-2020

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SetShouldFireNotify.generated.h"

/* Anim notify for stopping/starting firing, which may come as a result
of certain weapon types. */
UCLASS()
class LOCOMOTION_API USetShouldFireNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	/* Override of Notify which sets bShouldFire on ULocomotionAnimInstance. */
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	bool bNewShouldFire;
};
