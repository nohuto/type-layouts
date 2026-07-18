struct _MI_STORE_INPAGE_COMPLETE_FLAGS// Size=0x4 (Id=2455)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long StoreFault:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long LowResourceFailure:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
};
