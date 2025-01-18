/*
Copyright (c) Meta Platforms, Inc. and affiliates.
All rights reserved.

This source code is licensed under the license found in the
LICENSE file in the root directory of this source tree.
*/

#pragma once

#include "OculusXRColocationSession.h"
#include "ColocationDiscoverySampleBPLibrary.generated.h"

UCLASS()
class COLOCATIONDISCOVERY_API UColocationDiscoverySampleBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/* Gets the Local IP Address of the device */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Oculus|ColocationSession", meta = (DisplayName = "Get Local IP As String"))
	static FString GetLocalIPAsString();

	/* Attempts to join a session based on the colocation session's supplied IP address */
	UFUNCTION(BlueprintCallable, Category = "Oculus|ColocationSession")
	static TArray<uint8> CreateByteArrayFromString(const FString& StringToConvert);

	/* Attempts to join a session based on the colocation session's supplied IP address */
	UFUNCTION(BlueprintCallable, Category = "Oculus|ColocationSession")
	static bool JoinColocationSession(const FOculusXRColocationSession& Session);
};
