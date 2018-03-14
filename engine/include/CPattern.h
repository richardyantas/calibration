#pragma once
#include "../Common.h"
#include "../Config.h"

namespace app
{
	class CPattern
	{
		private:
			int   m_pattern_type;
			Mat   m_frame;
			Size  m_pattern_size;
			float m_square_size;
		public:
			CPattern(const int &pattern_type);

	};
}