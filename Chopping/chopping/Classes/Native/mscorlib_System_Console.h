#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t690;
// System.IO.TextReader
struct TextReader_t972;
// System.Text.Encoding
struct Encoding_t281;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t689  : public Object_t
{
};
struct Console_t689_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t690 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t690 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t972 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t281 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t281 * ___outputEncoding_4;
};
