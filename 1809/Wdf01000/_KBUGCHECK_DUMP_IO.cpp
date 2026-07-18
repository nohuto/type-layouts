enum _KBUGCHECK_DUMP_IO_TYPE
{
    KbDumpIoInvalid=0,
    KbDumpIoHeader=1,
    KbDumpIoBody=2,
    KbDumpIoSecondaryData=3,
    KbDumpIoComplete=4
};

struct _KBUGCHECK_DUMP_IO// Size=0x18 (Id=3331)
{
    unsigned long long Offset;// Offset=0x0 Size=0x8
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long BufferLength;// Offset=0x10 Size=0x4
    enum _KBUGCHECK_DUMP_IO_TYPE Type;// Offset=0x14 Size=0x4
};
