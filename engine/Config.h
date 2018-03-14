#pragma once 

#include "Common.h"

#define video_path "../videos/LifeCam_chess.avi"
#define windowName "video"
#define windowGray "gray"

enum Pattern{CHESSBOARD,CIRCLES_GRID,ASYMMETRIC_CIRCLES_GRID,RINGS_GRID};
enum modes{DETECT_MODE,CALIBRATION_MODE,UNDISTORTION_MODE};

int pattern_type = RINGS_GRID;
Mat frame;
int key;

Size pattern_size[] = {Size(6,9),Size(4,5),Size(4,11),Size(5,4)};
Size imgPixelSize = Size(640,480);
float square_size[] = {0.02315,0.02315,0.02315,0.04540}; 
int noImages = 40;
int sample_FPS = 20;
//int mode = 0;