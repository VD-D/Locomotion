// Copyright Robert Zygmunt Uszynski 2019-2020

#include "..\..\Public\AnimNotifies\SetWeaponStateNotify.h"
#include "Character/LocomotionAnimInstance.h"
#include "Character/LocomotionCharacter.h"

void USetWeaponStateNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ULocomotionAnimInstance* AnimInstanceReference = Cast<ULocomotionAnimInstance>(MeshComp->GetAnimInstance());
	if (AnimInstanceReference)
	{
		AnimInstanceReference->SetWeaponState(WeaponStateToSet);
	}

	ALocomotionCharacter* LocomotionCharacter = Cast<ALocomotionCharacter>(MeshComp->GetOwner());
	if (LocomotionCharacter)
	{
		LocomotionCharacter->SetWeaponState(WeaponStateToSet);
	}
}
