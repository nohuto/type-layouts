union _KPRCB::_anonymous_532// Size=0x10 (Id=532)
{
    unsigned long long TrappedSecurityDomain;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char BpbState;// Offset=0x8 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char BpbCpuIdle:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char BpbFlushRsbOnTrap:1;// Offset=0x8 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BpbIbpbOnReturn:1;// Offset=0x8 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char BpbIbpbOnTrap:1;// Offset=0x8 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char BpbIbpbOnRetpolineExit:1;// Offset=0x8 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char BpbStateReserved:3;// Offset=0x8 Size=0x1 BitOffset=0x5 BitSize=0x3
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char BpbFeatures;// Offset=0x9 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char BpbClearOnIdle:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char BpbEnabled:1;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char BpbSmep:1;// Offset=0x9 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char BpbFeaturesReserved:5;// Offset=0x9 Size=0x1 BitOffset=0x3 BitSize=0x5
        };
    };
    unsigned char BpbCurrentSpecCtrl;// Offset=0xa Size=0x1
    unsigned char BpbKernelSpecCtrl;// Offset=0xb Size=0x1
    unsigned char BpbNmiSpecCtrl;// Offset=0xc Size=0x1
    unsigned char BpbUserSpecCtrl;// Offset=0xd Size=0x1
    short PairRegister;// Offset=0xe Size=0x2
    unsigned long long PrcbPad11[2];// Offset=0x0 Size=0x10
};
