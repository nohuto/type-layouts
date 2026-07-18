struct _unnamed_98// Size=0x8 (Id=98)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _KPROCESS_SECURE_STATE// Size=0x8 (Id=99)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
    struct _unnamed_98 Flags;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long EntireFlags:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};
