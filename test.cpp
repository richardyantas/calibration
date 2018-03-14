
#include "engine/Common.h"
#include "engine/Config.h"
#include "engine/include/CPipeline.h"
#include "engine/include/CPattern.h"

//CPipeline program;

int main()
{
	VideoCapture cap( video_path );
	if( !cap.isOpened() )
	{
    	cout << "Cannot open the video file!" << endl;
    	return -1;
    }
    namedWindow( windowName, 0 );

    while( true )
    {
    	cap >> frame;

        if( frame.empty() )
        {     
            break;
        }

    	cout<<"Frame\n";

    	//program.run(frame);
    	app::run();

    	imshow(windowName,frame);

    	key = waitKey(1);

    	if (key == 27)
    		break;

    }
}