struct _anonymous_463// Size=0x4 (Id=463)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Power_Button:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Sleep_Button:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Lid_Switch:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1c
        unsigned long Wake_Capable:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct BUTTON_EXTENSION// Size=0x30 (Id=464)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    unsigned long long SpinLock;// Offset=0x18 Size=0x8
    unsigned char LidState;// Offset=0x20 Size=0x1
    union // Size=0x4 (Id=0)
    {
        unsigned long Events;// Offset=0x24 Size=0x4
        struct _anonymous_463 UEvents;// Offset=0x24 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Capabilities;// Offset=0x28 Size=0x4
        struct _anonymous_463 UCapabilities;// Offset=0x28 Size=0x4
    };
};
