#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/Context
struct Context_t919;
struct Context_t919_marshaled;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Boolean)
extern "C" void Context__ctor_m4466 (Context_t919 * __this, int32_t ___opt, uint8_t* ___alwaysMatchFlags, uint8_t* ___neverMatchFlags, uint8_t* ___buffer1, uint8_t* ___buffer2, uint8_t* ___prev1, bool ___quickCheckPossible, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Context_t919_marshal(const Context_t919& unmarshaled, Context_t919_marshaled& marshaled);
void Context_t919_marshal_back(const Context_t919_marshaled& marshaled, Context_t919& unmarshaled);
void Context_t919_marshal_cleanup(Context_t919_marshaled& marshaled);
