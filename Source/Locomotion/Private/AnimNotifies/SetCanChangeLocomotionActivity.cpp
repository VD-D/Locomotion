// Copyright Robert Uszynski 2020

#include "..\..\Public\AnimNotifies\SetCanChangeLocomotionActivity.h"
#include "Character/LocomotionCharacter.h"

void USetCanChangeLocomotionActivity::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ALocomotionCharacter* CharacterReference = Cast<ALocomotionCharacter>(MeshComp->GetOwner());
	if (CharacterReference) CharacterReference->SetLocomotionActivityEnabled(bNewCanChangeLocomotionActivity);
}
