// Copyright Epic Games, Inc. All Rights Reserved.

#include "HLSLStudy.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "ShaderCore.h"
#include "Misc/Paths.h"

void FHLSLStudyModule::StartupModule()
{
    const FString ShaderDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
    AddShaderSourceDirectoryMapping(TEXT("/Project"), ShaderDir);
}

void FHLSLStudyModule::ShutdownModule()
{
}

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, HLSLStudy, "HLSLStudy" );
