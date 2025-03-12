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
    const char SETUP_CHAR_STREAM[] PROGMEM = "rSVPin,19,1000,2000,3000,1510\nrSVPin,18,1200,1800,3000,1631\nrSVPin,17,1200,1800,3000,1530\nrSVPin,16,1200,1800,3000,1692\n";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM[] PROGMEM = "sC,19,0,1000,4178,250,0,4096,-250,0\nsC,18,0,450,5891,150,-17,5779,-150,24\nsC,17,0,450,4507,150,-11,4435,-150,15\nsC,16,0,450,6717,150,-6,6678,-150,8\nsC,18,467,500,5778,167,0,5778,-167,0\nsC,17,467,500,4434,167,0,4434,-167,0\nsC,16,467,500,6677,167,0,6677,-167,0\n";
    const char STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP[] PROGMEM = "sC,19,1000,44,4096,22,0,4178,-22,0\nsC,18,1000,17,5779,6,16,5825,-6,-16\nsC,17,1000,17,4434,6,10,4465,-6,-10\nsC,16,1000,0,6717,0,0,6717,0,0\n";
    const char STREAM_PRESENTING_CHAR_STREAM[] PROGMEM = "sC,19,0,967,4096,290,0,6148,-352,0\nsC,18,0,233,5778,81,-74,5332,-79,105\nsC,17,0,667,4434,227,-339,2250,-232,424\nsC,16,0,667,6677,223,-48,6594,-223,-6\nsC,18,233,434,5332,142,-188,5000,-143,60\nsC,18,716,250,5007,112,369,6874,-56,-866\nsC,17,716,216,2234,73,32,2407,-72,-21\nsC,16,716,216,6598,71,98,7120,-64,-290\nsC,17,932,67,2407,14,4,2335,-11,-46\nsC,16,932,50,7120,20,88,7518,-14,-140\nsC,18,966,33,6874,16,252,7683,-34,-37\nsC,19,967,1600,6148,483,0,805,-573,132\nsC,16,982,17,7518,6,62,7716,-10,14\nsC,16,999,17,7716,19,-28,7259,-6,152\nsC,18,999,50,7683,4,5,7017,-5,56\nsC,17,999,117,2335,17,73,3977,-45,-157\nsC,16,1016,16,7259,5,-137,6849,-6,135\nsC,16,1032,100,6849,28,-635,5051,-34,608\nsC,18,1049,283,7017,74,-828,4730,-101,594\nsC,17,1116,216,3977,0,1,4106,-21,-17\nsC,16,1132,200,5051,65,-1158,1639,-85,1064\nsC,17,1383,150,4117,49,-29,3980,-48,-7\nsC,16,1383,183,1519,89,1009,4943,-55,-1170\nsC,18,1383,233,4675,91,501,6710,-66,-727\nsC,17,1533,50,3980,13,2,4060,-12,32\nsC,16,1566,100,4943,34,732,7132,-27,-756\nsC,17,1583,100,4060,48,-132,2632,-26,112\nsC,18,1616,67,6710,21,234,7579,-3,3\nsC,16,1666,17,7132,6,168,7638,-21,-29\nsC,16,1683,66,7638,0,0,6975,-23,127\nsC,18,1683,50,7579,4,-4,6277,-21,352\nsC,17,1683,66,2632,11,-45,2718,-13,-7\nsC,18,1733,233,6277,46,-793,4239,-87,476\nsC,17,1749,217,2718,72,36,2788,-72,-31\nsC,16,1749,217,6975,64,-350,6213,-73,176\nsC,18,2000,633,4178,176,117,7012,-100,-1156\nsC,17,2000,583,2805,197,19,2078,-191,362\nsC,16,2000,583,6185,198,54,7261,-186,-550\nsC,19,2567,800,805,263,-60,2195,-270,-422\nsC,16,2583,100,7261,17,49,7788,-1,1\nsC,17,2583,100,2078,27,-52,1750,-25,-16\nsC,18,2633,67,7012,14,164,7766,-30,-1\nsC,16,2683,34,7788,22,-12,7466,-9,123\nsC,17,2683,284,1750,17,11,3636,-60,-206\nsC,18,2700,33,7766,15,0,7513,-11,81\nsC,16,2717,266,7466,82,-1162,5095,-112,851\nsC,18,2733,117,7513,36,-256,6837,-42,193\nsC,18,2850,183,6837,59,-269,6147,-60,248\nsC,17,2967,166,3636,46,157,3735,-50,-31\nsC,16,2983,400,5095,144,-1095,1627,-160,963\nsC,18,3033,350,6147,117,-485,4733,-124,364\nsC,17,3133,250,3735,84,53,4041,-83,-135\nsC,19,3367,2600,2195,855,1337,6339,-862,-508\nsC,16,3400,300,1555,95,-279,771,-101,81\nsC,17,3400,1567,4072,525,947,6398,-538,-389\nsC,18,3400,750,4696,249,-385,3684,-253,207\nsC,16,3700,633,771,128,-102,1789,-140,-277\nsC,18,4150,467,3684,153,-125,3476,-151,192\nsC,16,4333,284,1789,88,174,2321,-91,-13\nsC,16,4617,350,2321,113,16,1956,-113,76\nsC,18,4617,350,3476,117,-148,2744,-116,201\nsC,16,5000,750,1940,311,127,5421,-241,-1359\nsC,17,5000,533,6422,174,136,6932,-175,10\nsC,18,5000,800,2693,358,-283,5097,-303,-895\nsC,17,5533,234,6932,77,-4,6727,-77,59\nsC,16,5750,183,5421,52,294,6280,-61,-145\nsC,17,5767,166,6727,49,-38,6541,-44,189\nsC,18,5800,733,5097,213,630,5506,-227,-31\nsC,16,5933,600,6280,133,316,6572,-150,-27\nsC,17,5933,134,6541,47,-200,5716,-46,233\nsC,19,5967,4033,6339,1537,906,4096,-1008,0\nsC,17,6067,466,5716,141,-715,4352,-164,179\nsC,17,6583,3383,4332,1128,-261,4434,-1128,-27\nsC,16,6583,3383,6578,1128,126,6677,-1128,3\nsC,18,6583,3383,5516,1128,229,5778,-1128,1\n";
    const char STREAM_PRESENTING_CHAR_STREAM_LOOP[] PROGMEM = "sC,16,10000,13,6717,6,0,6678,-6,0\n";
    const char STREAM_TEST_CHAR_STREAM[] PROGMEM = "sC,19,0,667,4096,195,0,0,-246,0\nsC,18,0,633,5778,211,0,5778,-211,0\nsC,17,0,633,4434,211,0,4434,-211,0\nsC,16,0,633,6677,211,0,6677,-211,0\nsC,19,667,2000,0,590,0,8192,-700,-627\nsC,17,683,4283,4434,1428,0,4434,-1428,0\nsC,16,683,4283,6677,1428,0,6677,-1428,0\nsC,18,683,4283,5778,1428,0,5778,-1428,0\nsC,19,2667,2333,8192,881,790,4096,-588,0\n";
    const char STREAM_TEST_CHAR_STREAM_LOOP[] PROGMEM = "sC,18,5000,0,5891,0,0,5778,0,0\nsC,17,5000,0,4507,0,0,4434,0,0\nsC,16,5000,13,6717,6,0,6678,-6,0\n";
    const char STREAM_WAVE_CHAR_STREAM[] PROGMEM = "sC,19,0,1000,4096,290,0,1720,-371,0\nsC,18,0,600,5778,215,99,7276,-195,-683\nsC,16,0,533,6677,183,51,7434,-176,-377\nsC,17,0,600,4434,231,-170,2060,-187,1035\nsC,16,533,317,7434,100,214,8007,-104,-16\nsC,17,600,250,2060,76,-421,909,-90,206\nsC,18,600,250,7276,77,269,8000,-84,-73\nsC,16,850,150,8007,49,7,7937,-49,11\nsC,17,850,150,909,48,-110,794,-49,18\nsC,18,850,150,8000,48,42,7981,-49,3\nsC,16,1000,2300,7937,767,0,7937,-767,0\nsC,17,1000,2300,794,767,0,794,-767,0\nsC,18,1000,2300,7981,767,0,7981,-767,0\nsC,19,1000,2000,1720,604,0,6461,-706,-338\nsC,19,3000,2000,6461,672,321,2100,-642,600\nsC,16,3349,200,7937,66,13,8009,-66,17\nsC,17,3349,900,794,318,76,2827,-297,-822\nsC,18,3349,200,7982,66,4,7997,-65,49\nsC,18,3549,600,7997,201,-152,6955,-197,341\nsC,16,3549,683,8009,227,-57,7300,-225,229\nsC,18,4149,833,6955,275,-476,5992,-281,146\nsC,16,4232,750,7300,249,-253,6754,-251,109\nsC,17,4249,733,2827,242,668,4555,-248,-474\nsC,16,5000,2000,6747,667,-231,6677,-667,-12\nsC,17,5000,2000,4588,701,1160,4434,-693,91\nsC,18,5000,2000,5984,666,-254,5778,-667,-5\nsC,19,5000,2000,2100,764,-715,4096,-536,0\n";
    const char STREAM_WAVE_CHAR_STREAM_LOOP[] PROGMEM = "sC,16,7000,13,6717,6,0,6678,-6,0\n";

    CommandStream setupStream = CommandStream(SETUP_CHAR_STREAM, 0);
    CommandStream stream_DefaultPose = CommandStream(STREAM_DEFAULTPOSE_CHAR_STREAM, 1000, STREAM_DEFAULTPOSE_CHAR_STREAM_LOOP, 171);
    CommandStream stream_Presenting = CommandStream(STREAM_PRESENTING_CHAR_STREAM, 10000, STREAM_PRESENTING_CHAR_STREAM_LOOP, 418);
    CommandStream stream_Test = CommandStream(STREAM_TEST_CHAR_STREAM, 5000, STREAM_TEST_CHAR_STREAM_LOOP, 78);
    CommandStream stream_Wave = CommandStream(STREAM_WAVE_CHAR_STREAM, 7000, STREAM_WAVE_CHAR_STREAM_LOOP, 78);    

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
        default:
            return NULL;
        }
    }

    CommandStream *getSetupCommandStream()
    {
        return &setupStream;
    }
} // namespace GeneratedCommandStreams
