struct _MI_STORE_WRITE_STATE// Size=0x4 (Id=1975)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            long FlushCompleting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            long FlushInProgress:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        long EntireField;// Offset=0x0 Size=0x4
    };
};
