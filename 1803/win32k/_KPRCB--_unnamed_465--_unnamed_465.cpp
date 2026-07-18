struct _KPRCB::_unnamed_465::_unnamed_465// Size=0x10 (Id=465)
{
    unsigned long long TrappedSecurityDomain;// Offset=0x0 Size=0x8
    union // Size=0x2 (Id=0)
    {
        unsigned short BpbState;// Offset=0x8 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short BpbIbrsPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short BpbStibpPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short BpbSmepPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short BpbSimulateSpecCtrl:1;// Offset=0x8 Size=0x2 BitOffset=0x3 BitSize=0x1
            unsigned short BpbSimulateIbpb:1;// Offset=0x8 Size=0x2 BitOffset=0x4 BitSize=0x1
            unsigned short BpbIbpbPresent:1;// Offset=0x8 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short BpbCpuIdle:1;// Offset=0x8 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short BpbClearSpecCtrlOnIdle:1;// Offset=0x8 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short BpbHTDisabled:1;// Offset=0x8 Size=0x2 BitOffset=0x8 BitSize=0x1
            unsigned short BpbUserToUserOnly:1;// Offset=0x8 Size=0x2 BitOffset=0x9 BitSize=0x1
            unsigned short BpbReserved:6;// Offset=0x8 Size=0x2 BitOffset=0xa BitSize=0x6
        };
    };
    unsigned char BpbSpecCtrlValue;// Offset=0xa Size=0x1
    unsigned char BpbCtxSwapSetValue;// Offset=0xb Size=0x1
    unsigned char BpbPad[4];// Offset=0xc Size=0x4
};
