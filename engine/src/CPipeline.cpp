#pragma once
#include "../Common.h"
#include "../Config.h"
#include "CPattern.h"
#include "CProcessor.h"
#include "CPipeline.h"

namespace app
{

	void CPipeline::process(const In& in, Out& out)
	{
		BType B;
		detection->detection(in,out);
		//CType C;
		//calibration->calibration(B,C);
		//undistortion->undistortion(C,out);
	}

	void run()
	{
		CPattern pattern(CHESSBOARD);

		CProcessor processor;
		CPipeline pipeline;
		pipeline.detection    = &processor;
		//pipeline.calibration  = &processor;
		//pipeline.undistortion = &processor;
		//In in;
		//Out out;
		vector<Point2f> PointBuffer;
		pipeline.process(pattern,PointBuffer);
	}


}
