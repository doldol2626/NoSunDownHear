// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EBlockType : uint8
{
    Air         UMETA(DisplayName = "Air"),
    Dirt        UMETA(DisplayName = "Dirt"),
    Stone       UMETA(DisplayName = "Stone")
};
