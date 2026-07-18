struct _unnamed_1670// Size=0x8 (Id=1670)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_1671// Size=0x8 (Id=1671)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _unnamed_1670 Flags;// Offset=0x0 Size=0x8
};
