#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t1302;
// System.Text.Encoding
struct Encoding_t281;
// System.Byte[]
struct ByteU5BU5D_t102;
// System.Char[]
struct CharU5BU5D_t300;

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
extern "C" void ForwardingDecoder__ctor_m7037 (ForwardingDecoder_t1302 * __this, Encoding_t281 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ForwardingDecoder_GetChars_m7038 (ForwardingDecoder_t1302 * __this, ByteU5BU5D_t102* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t300* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
