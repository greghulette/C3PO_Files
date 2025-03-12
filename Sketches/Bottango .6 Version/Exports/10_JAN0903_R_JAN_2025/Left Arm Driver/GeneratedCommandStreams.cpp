#include "GeneratedCommandStreams.h"

namespace GeneratedCommandStreams
{

    //// !!! Insert/edit your animation triggering and playback logic here !!! ////
    /* Some helpful methods:

        BottangoCore::commandStreamProvider.streamIsInProgress()                                        //returns if any animation is currently playing
        BottangoCore::commandStreamProvider.startCommandStream(byte animationID, bool looping)          //starts playing an animation (and stops the current if any)
        BottangoCore::commandStreamProvider.stop()                                                      //stops the current playing animation, if any
    */

    /* Animations key:
        0 - Default Pose
        1 - Presenting
        2 - Wave
        3 - Test
    */

    bool playBegan = false;
    bool playOnStart = true;
    bool loop = false;
    byte startingAnimation = 0;

    // called once per update loop, your logic probably goes here.
    void updatePlayStatus()
    {
        // if haven't started any animations, or if should loop and nothing is playing (IE the last loop ended)
        if (playOnStart && (!playBegan || (loop && !BottangoCore::commandStreamProvider.streamIsInProgress())))
        {
            BottangoCore::commandStreamProvider.startCommandStream(startingAnimation, loop);
            playBegan = true;
        }
    }

    //// ----------------------------------------- /////

    //// GENERATED CODE. You probably don't need to change any of the below ////
    const char SETUP_CHAR_STREAM[] PROGMEM = "rSVPin,22,500,2500,3000,1500\nrSVPin,21,1000,2000,3000,1500\nrSVPin,19,1025,1925,3000,1475\nrSVPin,18,1100,2000,3000,1550\nrSVPin,16,750,2100,3000,1483\nrSVPin,17,800,2200,3000,1440\n";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,1000,378,4870,189,0,4096,-189,0\nsC,18,1000,222,3641,111,0,4096,-111,0\nsC,16,1000,76,4551,38,0,4447,-38,0\nsC,17,1000,58,3669,29,0,3745,-29,0\n";
    const char STREAM_PRESENTING_CHAR_STREAM[] PROGMEM = "sC,19,0,1000,4096,347,-159,2140,-350,117\nsC,18,0,1000,4096,347,-159,2140,-350,117\nsC,16,0,1000,4447,336,38,5254,-333,-300\nsC,17,0,1000,3745,336,-38,2938,-333,300\nsC,21,0,1500,4096,450,0,7232,-545,45\nsC,22,0,1000,4096,346,-204,2033,-346,204\nsC,17,1000,500,2937,167,-135,2693,-167,12\nsC,16,1000,500,5255,167,135,5499,-167,-12\nsC,22,1000,1000,2033,364,353,5743,-408,-325\nsC,18,1000,1000,2140,359,204,4787,-361,-218\nsC,19,1000,1000,2140,359,204,4787,-361,-218\nsC,17,1500,500,2693,169,-25,2234,-166,245\nsC,16,1500,500,5499,169,25,5958,-166,-245\nsC,21,1500,2300,7232,886,-73,2023,-933,-446\nsC,19,2000,1000,4787,382,-255,1055,-384,270\nsC,18,2000,1000,4787,382,-255,1055,-384,270\nsC,17,2000,1000,2232,333,-513,1035,-341,12\nsC,22,2000,800,5744,277,-30,4317,-267,492\nsC,16,2000,1000,5960,333,513,7157,-341,-12\nsC,22,2849,133,4243,44,-57,4118,-45,26\nsC,19,3000,4133,1055,1380,41,2810,-1376,-850\nsC,18,3000,4133,1055,1380,41,2810,-1376,-850\nsC,16,3000,2000,7157,702,-324,1226,-743,482\nsC,17,3000,2000,1035,702,324,6966,-743,-482\nsC,22,3049,366,4107,122,1,4109,-122,-1\nsC,22,3433,6533,4109,2178,13,4096,-2178,1\nsC,21,3800,1200,2023,364,174,5371,-430,-26\nsC,21,5000,5000,5371,1729,103,4096,-1140,0\nsC,17,5000,2000,6967,690,152,3958,-683,333\nsC,16,5000,2000,1225,690,-152,4234,-683,-333\nsC,16,7000,3000,4235,1000,320,4447,-1000,6\nsC,17,7000,3000,3957,1000,-320,3745,-1000,-6\nsC,18,7133,2867,2810,954,589,4096,-957,-24\nsC,19,7133,2867,2810,954,589,4096,-957,-24\n";
    const char STREAM_PRESENTING_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,10000,378,4870,189,0,4096,-189,0\nsC,18,10000,222,3641,111,0,4096,-111,0\nsC,16,10000,76,4551,38,0,4447,-38,0\nsC,17,10000,58,3669,29,0,3745,-29,0\n";
    const char STREAM_WAVE_CHAR_STREAM[] PROGMEM = "sC,19,0,783,4096,264,-61,3223,-262,259\nsC,18,0,783,4096,264,-61,3223,-262,259\nsC,19,800,167,3208,56,-40,3124,-56,14\nsC,18,800,167,3208,56,-40,3124,-56,14\nsC,18,1000,500,3121,183,155,4761,-167,-561\nsC,19,1000,500,3121,183,155,4761,-167,-561\nsC,19,1500,150,4765,50,132,5024,-53,-33\nsC,18,1500,150,4765,50,132,5024,-53,-33\nsC,18,1667,500,5025,175,-119,3889,-167,400\nsC,19,1667,500,5025,175,-119,3889,-167,400\nsC,19,2200,100,3824,33,-56,3702,-34,25\nsC,18,2200,100,3824,33,-56,3702,-34,25\nsC,19,2349,600,3694,210,181,5119,-208,-285\nsC,18,2349,600,3694,210,181,5119,-208,-285\nsC,18,3000,383,5140,134,-70,4373,-127,352\nsC,19,3000,383,5140,134,-70,4373,-127,352\nsC,18,3400,233,4326,77,-196,3895,-80,76\nsC,19,3400,233,4326,77,-196,3895,-80,76\nsC,19,3667,3300,3883,1100,-94,4096,-1100,-22\nsC,18,3667,3300,3883,1100,-94,4096,-1100,-22\n";
    const char STREAM_WAVE_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,7000,378,4870,189,0,4096,-189,0\nsC,18,7000,222,3641,111,0,4096,-111,0\nsC,16,7000,76,4551,38,0,4447,-38,0\nsC,17,7000,58,3669,29,0,3745,-29,0\n";
    const char STREAM_TEST_CHAR_STREAM[] PROGMEM = "";
    const char STREAM_TEST_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,5000,378,4870,189,0,4096,-189,0\nsC,18,5000,222,3641,111,0,4096,-111,0\nsC,16,5000,76,4551,38,0,4447,-38,0\nsC,17,5000,58,3669,29,0,3745,-29,0\n";

    CommandStream setupStream = CommandStream(SETUP_CHAR_STREAM, 0);
    CommandStream stream_DefaultPose = CommandStream(STREAM_DEFAULTPOSE_CHAR_STREAM, 1000, STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP, 963);
    CommandStream stream_Presenting = CommandStream(STREAM_PRESENTING_CHAR_STREAM, 10000, STREAM_PRESENTING_CHAR_STREAM_LOOP, 963);
    CommandStream stream_Wave = CommandStream(STREAM_WAVE_CHAR_STREAM, 7000, STREAM_WAVE_CHAR_STREAM_LOOP, 963);
    CommandStream stream_Test = CommandStream(STREAM_TEST_CHAR_STREAM, 5000, STREAM_TEST_CHAR_STREAM_LOOP, 963);    

    CommandStream *getCommandStream(byte streamID)
    {
        switch (streamID)
        {
        case 0:
            return &stream_DefaultPose;
        case 1:
            return &stream_Presenting;
        case 2:
            return &stream_Wave;
        case 3:
            return &stream_Test;
        default:
            return NULL;
        }
    }

    CommandStream *getSetupCommandStream()
    {
        return &setupStream;
    }
} // namespace GeneratedCommandStreams
