// Copyright Robert Zygmunt Uszynski 2019-2020

#include "..\..\Public\AnimNotifies\EquipWeaponNotify.h"
#include "Character/LocomotionCharacter.h"

void UEquipWeaponNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	ALocomotionCharacter* CharacterReference = Cast<ALocomotionCharacter>(MeshComp->GetOwner());
	if (CharacterReference)
	{
		/*
		switch (EquipDirection)
		{
		case EEquipDirection::Equip:
			CharacterReference->ReattachWeapon(CharacterReference->WeaponHandSocketName);
			break;

		case EEquipDirection::UnequipStart:
			CharacterReference->ReattachWeapon(CharacterReference->WeaponHolsterSocketName);
			break;

		case EEquipDirection::UnequipEnd:
			CharacterReference->OnUnequipWeaponEnd();
			break;
		}
		*/
	}
}