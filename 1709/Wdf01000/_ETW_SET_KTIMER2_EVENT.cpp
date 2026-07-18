struct _ETW_SET_KTIMER2_EVENT// Size=0x38 (Id=2267)
{
    unsigned long long DueTime;// Offset=0x0 Size=0x8
    unsigned long long MaximumDueTime;// Offset=0x8 Size=0x8
    unsigned long long Period;// Offset=0x10 Size=0x8
    unsigned long long TimerKey;// Offset=0x18 Size=0x8
    unsigned long long Callback;// Offset=0x20 Size=0x8
    unsigned long long CallbackContextKey;// Offset=0x28 Size=0x8
    unsigned char Flags;// Offset=0x30 Size=0x1
};
