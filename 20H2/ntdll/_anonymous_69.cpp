struct _anonymous_68// Size=0x8 (Id=68)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _anonymous_69// Size=0x8 (Id=69)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _anonymous_68 Flags;// Offset=0x0 Size=0x8
};
