struct _unnamed_89// Size=0x8 (Id=89)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_90// Size=0x8 (Id=90)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _unnamed_89 Flags;// Offset=0x0 Size=0x8
};
