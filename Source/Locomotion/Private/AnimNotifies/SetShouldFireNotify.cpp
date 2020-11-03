// Copyright Robert Zygmunt Uszynski 2019-2020

#include "..\..\Public\AnimNotifies\SetShouldFireNotify.h"
#include "Character/LocomotionAnimInstance.h"

void USetShouldFireNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ULocomotionAnimInstance* LocomotionAnimInstance = Cast<ULocomotionAnimInstance>(MeshComp->GetAnimInstance());
	if (LocomotionAnimInstance) LocomotionAnimInstance->SetShouldFire(bNewShouldFire);
}