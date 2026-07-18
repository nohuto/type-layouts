struct _STREAM_CONTEXT// Size=0x10 (Id=555)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long DequeuePointer;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long DequeueCycleState:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long StreamContextType:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
            unsigned long long DequeuePointerLo:28;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1c
            unsigned long long DequeuePointerHi:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Reserved1;// Offset=0x8 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            union // Size=0xc (Id=0)
            {
                unsigned long StreamEDTLA:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
                unsigned long Reserved2:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
                unsigned long Reserved3:7;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x7
            };
            unsigned long EdtlaValid_Alt1:1;// Offset=0x8 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long StreamEDTLA_Alt1:24;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Reserved4;// Offset=0xc Size=0x4
        struct // Size=0x4 (Id=0)
        {
            union // Size=0x10 (Id=0)
            {
                unsigned long PartialTRBLength:17;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x11
                unsigned long Reserved5:15;// Offset=0xc Size=0x4 BitOffset=0x11 BitSize=0xf
                unsigned long StreamEDTLA_Alt2:24;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x18
            };
            unsigned long Reserved6:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
};
