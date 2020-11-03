// Copyright Robert Zygmunt Uszynski 2019-2020

#include "..\..\Public\AnimNotifies\SetLocomotionActivityNotify.h"
#include "Character/LocomotionCharacter.h"

void USetLocomotionActivityNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ALocomotionCharacter* CharacterReference = Cast<ALocomotionCharacter>(MeshComp->GetOwner());
	if (CharacterReference) CharacterReference->SetLocomotionActivity(LocomotionActivity);
}