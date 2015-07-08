#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t102;
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1292  : public ArgumentException_t313
{
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t102* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;
};
