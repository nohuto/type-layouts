struct _MI_VAD_SEQUENTIAL_INFO// Size=0x8 (Id=1540)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Length:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
        unsigned long long Vpn:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
};

union _unnamed_1258// Size=0x8 (Id=1258)
{
    struct _MI_VAD_SEQUENTIAL_INFO SequentialVa;// Offset=0x0 Size=0x8
    struct _MMEXTEND_INFO * ExtendedInfo;// Offset=0x0 Size=0x8
};
