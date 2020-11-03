// Copyright Robert Zygmunt Uszynski 2019-2020

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Enumerations/WeaponState.h"
#include "SetWeaponStateNotify.generated.h"

/* An animation notify which states WeaponStateToSet on its caller (both the LocomotionCharacter 
and the LocomotionAnimInstance). */
UCLASS()
class LOCOMOTION_API USetWeaponStateNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	/* Override of Notify which sets IdleEntryStateToSet on ULocomotionAnimInstance. */
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	EWeaponState WeaponStateToSet;
	
};
