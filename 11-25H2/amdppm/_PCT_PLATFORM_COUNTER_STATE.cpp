struct _PCT_PLATFORM_COUNTER_STATE// Size=0x28 (Id=729)
{
    unsigned char Supported;// Offset=0x0 Size=0x1
    unsigned long long SnapshotTime;// Offset=0x8 Size=0x8
    unsigned long long PreviousValue;// Offset=0x10 Size=0x8
    unsigned long long RecentValue;// Offset=0x18 Size=0x8
    unsigned long long EffectiveValue;// Offset=0x20 Size=0x8
};
