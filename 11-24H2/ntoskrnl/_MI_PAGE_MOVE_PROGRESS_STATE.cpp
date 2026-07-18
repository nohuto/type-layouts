union _MI_PAGE_MOVE_PROGRESS_STATE// Size=0x8 (Id=1386)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long InProgressProcessors:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long SequenceNumber:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
    long long EntireValue;// Offset=0x0 Size=0x8
};
