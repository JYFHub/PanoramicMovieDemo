// Copyright 2015 Kite & Lightning.  All rights reserved.

#include "StereoPanoramaPrivatePCH.h"


TSharedPtr<FStereoPanoramaManager> StereoPanoramaManager;


void FStereoPanoramaDCCModule::StartupModule()
{
	StereoPanoramaManager = MakeShareable(new FStereoPanoramaManager());
}


void FStereoPanoramaDCCModule::ShutdownModule()
{
	if (StereoPanoramaManager.IsValid())
	{
		StereoPanoramaManager.Reset();
	}
}


TSharedPtr<FStereoPanoramaManager> FStereoPanoramaDCCModule::Get()
{
	check(StereoPanoramaManager.IsValid());
	return StereoPanoramaManager;
}


IMPLEMENT_MODULE(FStereoPanoramaDCCModule, StereoPanoramaDCC)
