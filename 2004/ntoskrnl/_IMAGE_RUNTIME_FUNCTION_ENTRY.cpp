struct _IMAGE_RUNTIME_FUNCTION_ENTRY// Size=0xc (Id=1750)
{
    unsigned long BeginAddress;// Offset=0x0 Size=0x4
    unsigned long EndAddress;// Offset=0x4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long UnwindInfoAddress;// Offset=0x8 Size=0x4
        unsigned long UnwindData;// Offset=0x8 Size=0x4
    };
};
