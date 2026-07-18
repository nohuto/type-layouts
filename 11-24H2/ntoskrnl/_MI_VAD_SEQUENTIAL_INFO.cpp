struct _MI_VAD_SEQUENTIAL_INFO// Size=0x8 (Id=2402)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Length:12;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0xc
            unsigned long long Vpn:51;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x33
            unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
    };
};
