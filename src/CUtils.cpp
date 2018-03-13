#include <CUtils.h>
#include <cstring>

using namespace std;


namespace calibCamera
{

    void imgRgb2cvMat( cv::Mat& dst, const cam::SImageRGB& rgbImage )
    {
        cam::u8* _buff = new cam::u8[ rgbImage.size ];
        memcpy( _buff, rgbImage.data, rgbImage.size );

        dst = cv::Mat( rgbImage.height, rgbImage.width, CV_8UC3,
                       _buff, cv::Mat::AUTO_STEP );
    }

    CCpuTimer* SCpuTimer::INSTANCE = NULL;

    CCpuTimer::SCpuTimer()
    {
        start();
    }

    CCpuTimer* CCpuTimer::create()
    {
        if ( SCpuTimer::INSTANCE != NULL )
        {
            delete SCpuTimer::INSTANCE;
            SCpuTimer::INSTANCE = NULL;
        }

        SCpuTimer::INSTANCE = new SCpuTimer();

        return SCpuTimer::INSTANCE;
    }

    void CCpuTimer::start()
    {
        m_timeStart = chrono::high_resolution_clock::now();
    }

    float CCpuTimer::stop()
    {
        m_timeStop = chrono::high_resolution_clock::now();
        chrono::duration< float > _delta = chrono::duration_cast< chrono::duration< float > >( m_timeStop - m_timeStart );

        return _delta.count();
    }




}