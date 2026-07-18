struct _unnamed_1354// Size=0x8 (Id=1354)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_1355// Size=0x8 (Id=1355)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _unnamed_1354 Flags;// Offset=0x0 Size=0x8
};
