#pragma once
#include <stdint.h>
// System.Security.SecurityElement
struct SecurityElement_t967;
// System.Collections.Stack
struct Stack_t271;
// Mono.Xml.SmallXmlParser
#include "mscorlib_Mono_Xml_SmallXmlParser.h"
// Mono.Xml.SecurityParser
struct  SecurityParser_t968  : public SmallXmlParser_t969
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t967 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t967 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t271 * ___stack_15;
};
