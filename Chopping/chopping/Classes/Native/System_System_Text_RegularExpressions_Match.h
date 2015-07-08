#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Regex
struct Regex_t380;
// System.Text.RegularExpressions.IMachine
struct IMachine_t582;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t581;
// System.Text.RegularExpressions.Match
struct Match_t573;
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Text.RegularExpressions.Match
struct  Match_t573  : public Group_t579
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::regex
	Regex_t380 * ___regex_6;
	// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Match::machine
	Object_t * ___machine_7;
	// System.Int32 System.Text.RegularExpressions.Match::text_length
	int32_t ___text_length_8;
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::groups
	GroupCollection_t581 * ___groups_9;
};
struct Match_t573_StaticFields{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::empty
	Match_t573 * ___empty_10;
};
