// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterEngine_generated_h
#error "ShooterEngine.generated.h already included, missing '#pragma once' in ShooterEngine.h"
#endif
#define SHOOTERGAME_ShooterEngine_generated_h

#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUShooterEngine(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_UShooterEngine(); \
	public: \
	DECLARE_CLASS(UShooterEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(UShooterEngine) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UShooterEngine*>(this); }


#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesUShooterEngine(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_UShooterEngine(); \
	public: \
	DECLARE_CLASS(UShooterEngine, UGameEngine, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), 0, ShooterGame, NO_API) \
	DECLARE_SERIALIZER(UShooterEngine) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<UShooterEngine*>(this); }


#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterEngine); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UShooterEngine(const UShooterEngine& InCopy); \
public:


#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShooterEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API UShooterEngine(const UShooterEngine& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShooterEngine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShooterEngine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShooterEngine)


#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_7_PROLOG
#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_INCLASS \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_ShooterEngine_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShooterEngine."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_ShooterEngine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
