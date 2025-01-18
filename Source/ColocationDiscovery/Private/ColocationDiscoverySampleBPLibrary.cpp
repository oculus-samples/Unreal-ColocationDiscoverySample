/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#include "ColocationDiscoverySampleBPLibrary.h"
#include <IPAddress.h>
#include <SocketSubsystem.h>

FString UColocationDiscoverySampleBPLibrary::GetLocalIPAsString()
{
	bool canBind = false;
	TSharedRef<FInternetAddr> localIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	return (localIp->IsValid() ? localIp->ToString(false) : "0.0.0.0");
}

TArray<uint8> UColocationDiscoverySampleBPLibrary::CreateByteArrayFromString(const FString& StringToConvert)
{
	TArray<uint8> arr;
	arr.SetNumUninitialized(StringToConvert.Len());
	StringToBytes(StringToConvert, arr.GetData(), StringToConvert.Len());

	return arr;
}

bool UColocationDiscoverySampleBPLibrary::JoinColocationSession(const FOculusXRColocationSession& Session)
{
	FString IP = BytesToString(Session.Metadata.GetData(), Session.Metadata.Num());
	GEngine->SetClientTravel(GWorld, *IP, ETravelType::TRAVEL_Absolute);

	return true;
}
