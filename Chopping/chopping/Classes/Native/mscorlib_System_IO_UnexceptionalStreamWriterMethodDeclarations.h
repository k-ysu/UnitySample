#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1052;
// System.IO.Stream
struct Stream_t808;
// System.Text.Encoding
struct Encoding_t281;
// System.Char[]
struct CharU5BU5D_t300;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m5647 (UnexceptionalStreamWriter_t1052 * __this, Stream_t808 * ___stream, Encoding_t281 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m5648 (UnexceptionalStreamWriter_t1052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m5649 (UnexceptionalStreamWriter_t1052 * __this, CharU5BU5D_t300* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m5650 (UnexceptionalStreamWriter_t1052 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m5651 (UnexceptionalStreamWriter_t1052 * __this, CharU5BU5D_t300* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m5652 (UnexceptionalStreamWriter_t1052 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
