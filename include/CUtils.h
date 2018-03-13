#pragma once

#include "../Common.h"
#include <chrono>

using namespace std;

namespace calibCamera
{

	void imgRgb2cvMat( cv::Mat& dst, const cam::SImageRGB& rgbImage );

	class CCpuTimer
	{
		private:
			chrono::high_resolution_clock::time_point m_timeStart;
			chrono::high_resolution_clock::time_point m_timeStop;
			YCpuTimer();

		public:
			static YCpuTimer* create();
			static YCpuTimer* INSTANCE;

			void start();
			float stop();

	}

	class CUtils
	{

	}

}