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

// Function Transylvania_LightMaster.Transylvania_LightMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATransylvania_LightMaster_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Transylvania_LightMaster.Transylvania_LightMaster_C.UserConstructionScript");

	ATransylvania_LightMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
