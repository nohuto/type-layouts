union NVME_CONTROLLER_CAPABILITIES// Size=0x8 (Id=1256)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MQES:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long CQR:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long AMS_WeightedRoundRobinWithUrgent:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long AMS_VendorSpecific:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long Reserved0:5;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x5
        unsigned long long TO:8;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x8
        unsigned long long DSTRD:4;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x4
        unsigned long long NSSRS:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long CSS_NVM:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long CSS_Reserved0:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long CSS_Reserved1:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long CSS_Reserved2:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long CSS_Reserved3:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
        unsigned long long CSS_Reserved4:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
        unsigned long long CSS_MultipleIo:1;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x1
        unsigned long long CSS_AdminOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x1
        unsigned long long BPS:1;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0x1
        unsigned long long CPS:2;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x2
        unsigned long long MPSMIN:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long MPSMAX:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long PMRS:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long CMBS:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long NSSS:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long CRWMS:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long CRIMS:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long Reserved2:3;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
