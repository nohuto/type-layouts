struct _WHEA_ARM_RAS_NODE_SECTION// Size=0x50 (Id=3539)
{
    unsigned int NodeFieldCount;// Offset=0x0 Size=0x4
    unsigned int NodeIndex;// Offset=0x4 Size=0x4
    unsigned char InterfaceType;// Offset=0x8 Size=0x1
    unsigned char AestNodeType;// Offset=0x9 Size=0x1
    unsigned char Reserved[6];// Offset=0xa Size=0x6
    unsigned long long ErrFr;// Offset=0x10 Size=0x8
    unsigned long long ErrCtlr;// Offset=0x18 Size=0x8
    unsigned long long ErrStatus;// Offset=0x20 Size=0x8
    unsigned long long ErrAddr;// Offset=0x28 Size=0x8
    unsigned long long ErrMisc0;// Offset=0x30 Size=0x8
    unsigned long long ErrMisc1;// Offset=0x38 Size=0x8
    unsigned long long ErrMisc2;// Offset=0x40 Size=0x8
    unsigned long long ErrMisc3;// Offset=0x48 Size=0x8
};
