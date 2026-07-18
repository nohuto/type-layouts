union _PSP_FAULT_COUNTER// Size=0x4 (Id=2178)
{
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Flags:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Index:15;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0xf
        unsigned long Active:15;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xf
    };
};
