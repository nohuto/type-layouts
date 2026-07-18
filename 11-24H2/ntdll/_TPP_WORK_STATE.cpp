union _TPP_WORK_STATE// Size=0x4 (Id=354)
{
    long Exchange;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Insertable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PendingCallbackCount:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};
