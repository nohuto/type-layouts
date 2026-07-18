struct _unnamed_809// Size=0x8 (Id=809)
{
    unsigned char RangeCrossingSupported;// Offset=0x0 Size=0x1
    unsigned char FixedAclModeSupported;// Offset=0x1 Size=0x1
    unsigned short NumLockingSpAdminAuth;// Offset=0x2 Size=0x2
    unsigned short NumLockingSpUserAuth;// Offset=0x4 Size=0x2
    unsigned char InitialSIDPin;// Offset=0x6 Size=0x1
    unsigned char SIDPinBehaviorOnRevert;// Offset=0x7 Size=0x1
};

union _unnamed_810// Size=0x8 (Id=810)
{
    struct _unnamed_809 Opal;// Offset=0x0 Size=0x8
};
