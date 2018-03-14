#pragma once
#include "../Common.h"
#include "../Config.h"
#include "CPattern.h"
#include "CProcessor.h"


namespace app
{
	// Detection - Calibration - Undistorsion
	
	struct CPipeline
	{
		CDetection*    detection;
		CCalibration*  calibration;
		CUndistortion* undistortion;

		void process(const In& in, Out& out);		
	};

	void run();
	
}