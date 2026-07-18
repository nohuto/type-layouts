struct _anonymous_409// Size=0x8 (Id=409)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _anonymous_410// Size=0x8 (Id=410)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _anonymous_409 Flags;// Offset=0x0 Size=0x8
};
