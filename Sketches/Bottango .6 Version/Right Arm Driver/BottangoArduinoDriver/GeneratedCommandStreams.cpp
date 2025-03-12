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
        2 - Test
        3 - Wave
        4 - New Animation
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
    const char SETUP_CHAR_STREAM[] PROGMEM = "rSVPin,17,500,2500,3000,672\nrSVPin,18,500,2500,3000,1406\nrSVPin,19,600,2000,3000,614\nrSVPin,21,700,1750,3000,1435\nrSVPin,22,1200,1700,3000,1412\nrSVPin,16,500,2100,3000,594\n";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM[] PROGMEM = "sC,16,0,467,482,118,0,501,-176,0\nsC,21,0,467,5734,118,0,5928,-176,0\nsC,22,0,467,3475,118,0,3662,-176,0\nsC,17,0,1000,704,333,4,749,-333,-4\nsC,18,0,1000,3710,333,-4,3665,-333,4\nsC,19,0,467,82,118,0,234,-176,0\nsC,16,467,533,501,198,0,482,-132,0\nsC,19,467,533,234,198,0,0,-132,0\nsC,22,467,533,3662,198,0,3475,-132,0\nsC,21,467,533,5928,198,0,5851,-132,0\n";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,1000,62,0,31,0,82,-31,0\nsC,21,1000,66,5851,33,0,5734,-33,0\nsC,17,1000,141,573,71,0,704,-71,0\nsC,18,1000,863,4506,431,0,3710,-431,0\n";
    const char STREAM_PRESENTING_CHAR_STREAM[] PROGMEM = "sC,17,0,2383,642,795,-11,385,-794,46\nsC,16,0,1033,482,258,0,3363,-258,0\nsC,19,0,1967,0,492,0,1045,-492,92\nsC,21,0,2767,5851,692,0,2353,-692,0\nsC,22,0,2000,3475,629,0,8004,-703,0\nsC,18,0,2383,3617,795,25,4155,-795,-64\nsC,16,1033,4367,3363,1094,0,7913,-1641,703\nsC,19,1967,1233,1045,365,-68,4872,-534,-60\nsC,22,2000,1867,8004,534,0,8051,-706,430\nsC,18,2400,33,4156,22,2,4159,-22,-2\nsC,17,2400,33,385,22,1,389,-22,-5\nsC,18,2467,2500,4165,834,123,3494,-833,27\nsC,17,2467,817,407,287,321,2804,-270,-802\nsC,21,2767,3233,2353,820,0,6627,-1226,-785\nsC,19,3200,1033,4872,329,37,6764,-354,273\nsC,17,3284,766,2804,251,744,4471,-259,-478\nsC,22,3867,2133,8051,750,-457,1758,-711,163\nsC,17,4050,917,4471,303,559,5622,-313,2\nsC,19,4233,1600,6764,537,-415,1556,-526,707\nsC,18,5000,800,3495,268,93,4191,-269,-109\nsC,17,5000,367,5614,134,-170,4416,-122,465\nsC,17,5367,433,4416,138,-529,3101,-148,298\nsC,16,5400,4600,7913,1721,-737,0,-1148,0\nsC,19,5833,3967,1556,1515,-2036,0,-1031,0\nsC,17,5833,1983,3063,661,-532,1648,-661,446\nsC,18,5833,2283,4198,761,76,4030,-761,171\nsC,21,6000,4000,6627,1478,946,5851,-989,0\nsC,22,6000,1533,1758,524,-120,7489,-494,-265\nsC,22,7533,2467,7489,926,497,3475,-671,0\nsC,17,7816,2150,1648,715,-482,643,-718,37\nsC,18,8116,1850,4030,617,-138,3618,-617,25\n";
    const char STREAM_PRESENTING_CHAR_STREAM_LOOP[] PROGMEM = "sC,16,10000,418,0,209,0,482,-209,0\nsC,17,10000,75,573,37,0,642,-37,0\nsC,18,10000,964,4506,482,0,3618,-482,0\n";
    const char STREAM_TEST_CHAR_STREAM[] PROGMEM = "sC,22,0,5000,3475,1250,0,3475,-1250,0\nsC,16,0,667,482,195,0,8192,-246,0\nsC,21,0,5000,5851,1250,0,5851,-1250,0\nsC,19,0,5000,0,1250,0,0,-1250,0\nsC,18,0,5000,3617,1667,0,3617,-1667,0\nsC,17,0,5000,642,1667,0,642,-1667,0\nsC,16,667,666,8192,209,0,0,-233,320\nsC,16,1333,1000,0,321,-440,8192,-341,29\nsC,16,2333,1000,8192,336,-29,0,-326,1169\nsC,16,3333,667,0,230,-824,8192,-213,-123\nsC,16,4000,1000,8192,377,219,482,-280,0\n";
    const char STREAM_TEST_CHAR_STREAM_LOOP[] PROGMEM = "sC,17,5000,75,573,37,0,642,-37,0\nsC,18,5000,964,4506,482,0,3618,-482,0\n";
    const char STREAM_WAVE_CHAR_STREAM[] PROGMEM = "sC,19,0,1000,0,290,0,0,-371,0\nsC,16,0,1000,482,290,0,7756,-371,0\nsC,17,0,317,642,134,294,2576,-101,-744\nsC,18,0,533,3617,178,33,3884,-178,-65\nsC,22,0,633,3475,184,0,5394,-235,0\nsC,21,0,7000,5851,1750,0,5851,-1750,0\nsC,17,317,683,2576,180,1322,5236,-243,-178\nsC,18,533,467,3884,155,56,3891,-155,1\nsC,22,633,1034,5394,330,0,3852,-357,48\nsC,19,1000,667,0,213,0,4823,-231,0\nsC,16,1000,3667,7756,1139,0,7756,-917,0\nsC,18,1000,3000,3891,1000,-1,3845,-1000,2\nsC,17,1000,3000,5236,1000,0,5242,-1000,0\nsC,22,1667,666,3852,216,-29,3795,-227,-22\nsC,19,1667,666,4823,216,0,0,-227,124\nsC,22,2333,667,3795,219,21,3700,-225,-12\nsC,19,2333,667,0,219,-119,4709,-225,62\nsC,19,3000,667,4709,221,-61,0,-222,218\nsC,22,3000,667,3700,221,11,3509,-222,-45\nsC,22,3667,3333,3509,1256,254,3475,-837,0\nsC,19,3667,666,0,223,-219,4461,-220,91\nsC,17,4000,850,5242,286,-49,4427,-282,351\nsC,18,4000,1333,3845,444,2,3859,-444,46\nsC,19,4333,667,4461,225,-93,0,-219,264\nsC,16,4667,2333,7756,583,0,482,-568,0\nsC,17,4850,1083,4427,364,-453,2809,-358,728\nsC,19,5000,2000,0,765,-923,0,-531,0\nsC,18,5333,1667,3859,556,-57,3617,-556,17\nsC,17,5933,1067,2809,351,-715,642,-364,145\n";
    const char STREAM_WAVE_CHAR_STREAM_LOOP[] PROGMEM = "sC,17,7000,75,573,37,0,642,-37,0\nsC,18,7000,964,4506,482,0,3618,-482,0\n";
    const char STREAM_NEWANIMATION_CHAR_STREAM[] PROGMEM = "sC,16,0,1967,0,492,0,8156,-211,3638\nsC,16,1967,2033,8156,497,-8569,0,-508,0\nsC,16,4000,1967,0,492,0,8192,-492,0\nsC,16,5967,1966,8192,492,0,3586,-510,-3808\nsC,16,7933,2067,3586,382,2852,0,-517,0\n";
    const char STREAM_NEWANIMATION_CHAR_STREAM_LOOP[] PROGMEM = "";

    CommandStream setupStream = CommandStream(SETUP_CHAR_STREAM, 0);
    CommandStream stream_DefaultPose = CommandStream(STREAM_DEFAULTPOSE_CHAR_STREAM, 1000, STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP, 862);
    CommandStream stream_Presenting = CommandStream(STREAM_PRESENTING_CHAR_STREAM, 10000, STREAM_PRESENTING_CHAR_STREAM_LOOP, 963);
    CommandStream stream_Test = CommandStream(STREAM_TEST_CHAR_STREAM, 5000, STREAM_TEST_CHAR_STREAM_LOOP, 963);
    CommandStream stream_Wave = CommandStream(STREAM_WAVE_CHAR_STREAM, 7000, STREAM_WAVE_CHAR_STREAM_LOOP, 963);
    CommandStream stream_NewAnimation = CommandStream(STREAM_NEWANIMATION_CHAR_STREAM, 10000, STREAM_NEWANIMATION_CHAR_STREAM_LOOP, 0);    

    CommandStream *getCommandStream(byte streamID)
    {
        switch (streamID)
        {
        case 0:
            return &stream_DefaultPose;
        case 1:
            return &stream_Presenting;
        case 2:
            return &stream_Test;
        case 3:
            return &stream_Wave;
        case 4:
            return &stream_NewAnimation;
        default:
            return NULL;
        }
    }

    CommandStream *getSetupCommandStream()
    {
        return &setupStream;
    }
} // namespace GeneratedCommandStreams
