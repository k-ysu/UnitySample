#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t623;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t633  : public Expression_t619
{
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t623 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;
};
