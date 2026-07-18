struct _ETW_CLOCK_STATE_CHANGE_EVENT// Size=0x18 (Id=2459)
{
    unsigned char NewState;// Offset=0x0 Size=0x1
    unsigned char PrevState;// Offset=0x1 Size=0x1
    unsigned char Reserved[6];// Offset=0x2 Size=0x6
    union // Size=0x18 (Id=0)
    {
        unsigned long long DeliveredIncrement;// Offset=0x8 Size=0x8
        unsigned long long RequestedIncrement;// Offset=0x10 Size=0x8
        unsigned long long NextClockUpdateTime;// Offset=0x8 Size=0x8
    };
};
