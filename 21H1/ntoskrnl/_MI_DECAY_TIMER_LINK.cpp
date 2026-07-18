struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=1617)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long Spare1:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _anonymous_1278// Size=0x8 (Id=1278)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=1279)
{
    union _anonymous_1278 u1;// Offset=0x0 Size=0x8
};
