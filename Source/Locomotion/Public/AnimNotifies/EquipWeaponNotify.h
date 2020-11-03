// Copyright Robert Zygmunt Uszynski 2019-2020

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EquipWeaponNotify.generated.h"

UENUM(BlueprintType)
enum class EEquipDirection : uint8
{
	Equip        UMETA(DisplayName = "Equip"),
	UnequipStart UMETA(DisplayName = "Unequip Start"),
	UnequipEnd   UMETA(DisplayName = "Unequip End")
};

/* Animation notify for equipping/unequipping weapons.
Does not nothing if not used by ALocomotionCharacter. */
UCLASS()
class LOCOMOTION_API UEquipWeaponNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	/* Override of Notify which sets IdleEntryStateToSet on ULocomotionAnimInstance. */
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify")
	EEquipDirection EquipDirection;
};
