﻿// Copyright (C) 2019 Gon�alo Marques - All Rights Reserved

#pragma once

#include "UObject/Interface.h"
#include "Data/InputType.h"
#include "Data/NavigationDirection.h"
#include "UINavPCReceiver.generated.h"

UINTERFACE(MinimalAPI)
class UUINavPCReceiver : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UINAVIGATION_API IUINavPCReceiver
{
	GENERATED_BODY()

public:

	/**
	*	Called when the root UINavWidget is removed from the viewport
	*/
	UFUNCTION(BlueprintNativeEvent, Category = UINavController)
		void OnRootWidgetRemoved();
	virtual void OnRootWidgetRemoved_Implementation();

	/**
	*	Called when the input type changes
	*
	*	@param From The input type being used before
	*	@param To The input type being used now
	*/
	UFUNCTION(BlueprintNativeEvent, Category = UINavController)
		void OnInputChanged(EInputType From, EInputType To);
	virtual void OnInputChanged_Implementation(EInputType From, EInputType To);

	/**
	*	Called when the player navigates in a certain direction
	*
	*	@param Direction The direction of navigation
	*/
	UFUNCTION(BlueprintNativeEvent, Category = UINavController)
		void OnNavigated(ENavigationDirection NavigationDirection);
	virtual void OnNavigated_Implementation(ENavigationDirection NavigationDirection);

	UFUNCTION(BlueprintNativeEvent, Category = UINavController)
		void OnSelect();
	virtual void OnSelect_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = UINavController)
		void OnReturn();
	virtual void OnReturn_Implementation();

};