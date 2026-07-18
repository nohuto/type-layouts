struct _unnamed_526// Size=0x8 (Id=526)
{
    unsigned char RangeCrossingSupported;// Offset=0x0 Size=0x1
    unsigned char FixedAclModeSupported;// Offset=0x1 Size=0x1
    unsigned short NumLockingSpAdminAuth;// Offset=0x2 Size=0x2
    unsigned short NumLockingSpUserAuth;// Offset=0x4 Size=0x2
    unsigned char InitialSIDPin;// Offset=0x6 Size=0x1
    unsigned char SIDPinBehaviorOnRevert;// Offset=0x7 Size=0x1
};

union _unnamed_527// Size=0x8 (Id=527)
{
    struct _unnamed_526 Opal;// Offset=0x0 Size=0x8
};
