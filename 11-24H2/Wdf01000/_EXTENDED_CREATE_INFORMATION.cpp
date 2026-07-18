struct _EXTENDED_CREATE_INFORMATION// Size=0x20 (Id=3544)
{
    long long ExtendedCreateFlags;// Offset=0x0 Size=0x8
    void * EaBuffer;// Offset=0x8 Size=0x8
    unsigned long EaLength;// Offset=0x10 Size=0x4
    struct _EXTENDED_CREATE_DUAL_OPLOCK_KEYS * DualOplockKeys;// Offset=0x18 Size=0x8
};
