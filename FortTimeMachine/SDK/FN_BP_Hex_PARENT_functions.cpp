// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* CompletedQuest                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material_Instance_Dynamic      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_PARENT_C::HandleUpdatingBannerMesh(class USceneComponent* Target, class UFortQuestItemDefinition* CompletedQuest, class UMaterialInstanceDynamic* Material_Instance_Dynamic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleUpdatingBannerMesh");

	ABP_Hex_PARENT_C_HandleUpdatingBannerMesh_Params params;
	params.Target = Target;
	params.CompletedQuest = CompletedQuest;
	params.Material_Instance_Dynamic = Material_Instance_Dynamic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::HandleMissionAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleMissionAlert");

	ABP_Hex_PARENT_C_HandleMissionAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              TileTypeA                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              TileTypeB                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileIsSameRegionA              (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileIsSameRegionB              (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileIsHiddenA                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileIsHiddenB                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileExistsA                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TileExistsB                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings");

	ABP_Hex_PARENT_C_GroundSliceSettings_Params params;
	params.SourceMaterial = SourceMaterial;
	params.TileTypeA = TileTypeA;
	params.TileTypeB = TileTypeB;
	params.TileIsSameRegionA = TileIsSameRegionA;
	params.TileIsSameRegionB = TileIsSameRegionB;
	params.TileIsHiddenA = TileIsHiddenA;
	params.TileIsHiddenB = TileIsHiddenB;
	params.TileExistsA = TileExistsA;
	params.TileExistsB = TileExistsB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript");

	ABP_Hex_PARENT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
// (BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
// (BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
// (BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
// (BlueprintEvent)

void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamPower                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            PersonalPower                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int TeamPower, int PersonalPower)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged");

	ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params params;
	params.TeamPower = TeamPower;
	params.PersonalPower = PersonalPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::FireLightningA()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA");

	ABP_Hex_PARENT_C_FireLightningA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile");

	ABP_Hex_PARENT_C_OnInitializeTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_PARENT_C::HandleFrontendCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleFrontendCameraChanged");

	ABP_Hex_PARENT_C_HandleFrontendCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnMarkedQuestChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMarkedQuestChanged");

	ABP_Hex_PARENT_C_OnMarkedQuestChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::CheckIfQuestShouldBePinned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckIfQuestShouldBePinned");

	ABP_Hex_PARENT_C_CheckIfQuestShouldBePinned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::CheckFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus");

	ABP_Hex_PARENT_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::ForceDefocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus");

	ABP_Hex_PARENT_C_ForceDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated");

	ABP_Hex_PARENT_C_OnMissionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::CheckForPinnedInLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckForPinnedInLevel");

	ABP_Hex_PARENT_C_CheckForPinnedInLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnDefocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus");

	ABP_Hex_PARENT_C_OnDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::RetryTileInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryTileInitialized");

	ABP_Hex_PARENT_C_RetryTileInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::RetryUpdatesPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.RetryUpdatesPaused");

	ABP_Hex_PARENT_C_RetryUpdatesPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus");

	ABP_Hex_PARENT_C_OnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect");

	ABP_Hex_PARENT_C_OnHostDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnHostSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect");

	ABP_Hex_PARENT_C_OnHostSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_PARENT_C::SetMissionPowerLevelDependencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetMissionPowerLevelDependencies");

	ABP_Hex_PARENT_C_SetMissionPowerLevelDependencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect");

	ABP_Hex_PARENT_C_OnClientDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
// (Event, Public, BlueprintEvent)

void ABP_Hex_PARENT_C::OnClientSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect");

	ABP_Hex_PARENT_C_OnClientSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hex_PARENT_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ReceiveBeginPlay");

	ABP_Hex_PARENT_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightning(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightning");

	ABP_Hex_PARENT_C_MissionLightning_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)

void ABP_Hex_PARENT_C::MissionLightningOff(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.MissionLightningOff");

	ABP_Hex_PARENT_C_MissionLightningOff_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT");

	ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif