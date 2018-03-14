#pragma once

#include "../Common.h"
#include "../Config.h"
#include "../CPattern.h"

namespace app
{
	CPattern::CPattern(const int& pattern_type)
	{
		m_pattern_type = pattern_type;
		m_pattern_size = pattern_size[pattern_type];
		m_square_size  = square_size[pattern_type];
	}

}