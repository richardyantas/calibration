#pragma once
#include "../Common.h"
#include "../Config.h"
#include "CPattern.h"

namespace app
{
	struct In{};
	struct BType{};
	struct CType{};
	struct Out{
		vector<Point2f> PointBuffer;
	};

	struct CDetection
	{
		virtual void detection(const CPattern& pattern, vector<Point2f>& PointBuffer) = 0;
		virtual ~CDetection() = default;		
	}; 

	/*
	struct CCalibration
	{
		virtual void calibration(const BType& B, CType& C) = 0;
		virtual ~CCalibration() = default;
	}; 

	struct CUndistortion
	{
		virtual void undistortion(const CType& C, Out& out) = 0;
		virtual ~CUndistortion() = default;
	};
	*/

	struct CProcessor : CDetection, CCalibration, CUndistortion
	{
		void detection(const In& in, Out& out) override{}
		//void calibration(const BType& B, CType& C) override{}
		//void undistortion(const CType& C, Out& out) override{}
	};

}