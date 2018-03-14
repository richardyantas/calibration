#pragma once
#include "../Common.h"
#include "../Config.h"
#include "CPattern.h"
#include "CProcessor.h"

namespace app
{
	bool CProcessor::detection(const CPattern& pattern, vector<Point2f>& PointBuffer)
	{
		bool found = findChessboardCorners(frame, patternSize[CHESSBOARD],PointBuffer);
		return found;
	}

}