#ifndef GUARD_OAK_SPEECH_H
#define GUARD_OAK_SPEECH_H

void StartNewGameScene(void);

// Custom Starter
struct CustomStarter
{
    s16 speciesId;
    u8 monSpriteIconId;
    s8 natureId;
    s16 hpIV;                             // The IVs are 2bytes because of a edge case where their value can rise to >127
    s16 atkIV;
    s16 defIV;
    s16 spatkIV;
    s16 spdefIV;
    s16 spdIV;
    s8 digitSelectedIndex;
    u8 windowId;
    u8 funcId;                            // A patchy way to keep track of the functions
    u8 IVsCounter;                        // Allows me to get the right IV/IV-related stuff 
    bool8 isStarterPrepared;              // If true, sets up the starter in NewGameInitData
};        

extern struct CustomStarter *gCustomStarterStructPtr;       // Apparently, the task slots are already occupied so the next best thing is this

#endif //GUARD_OAK_SPEECH_H
