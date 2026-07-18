struct _RTL_CONDITION_VARIABLE// Size=0x8 (Id=639)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long WakeCount:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};
