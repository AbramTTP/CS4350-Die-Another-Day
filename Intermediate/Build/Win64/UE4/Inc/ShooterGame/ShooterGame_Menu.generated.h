// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGame_Menu_generated_h
#error "ShooterGame_Menu.generated.h already included, missing '#pragma once' in ShooterGame_Menu.h"
#endif
#define SHOOTERGAME_ShooterGame_Menu_generated_h

#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAShooterGame_Menu(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterGame_Menu(); \
	public: \
	DECLARE_CLASS(AShooterGame_Menu, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterGame_Menu) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterGame_Menu*>(this); }


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesAShooterGame_Menu(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterGame_Menu(); \
	public: \
	DECLARE_CLASS(AShooterGame_Menu, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(AShooterGame_Menu) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AShooterGame_Menu*>(this); }


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGame_Menu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGame_Menu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGame_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGame_Menu); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterGame_Menu(const AShooterGame_Menu& InCopy); \
public:


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGame_Menu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AShooterGame_Menu(const AShooterGame_Menu& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGame_Menu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGame_Menu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGame_Menu)


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_7_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterGame_Menu."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Online_ShooterGame_Menu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
