struct _DEBUG_LOG// Size=0x18 (Id=178)
{
    unsigned long LogIdx;// Offset=0x0 Size=0x4
    unsigned long LogSizeMask;// Offset=0x4 Size=0x4
    struct LOG_ENTRY64 * LogStart;// Offset=0x8 Size=0x8
    struct LOG_ENTRY64 * LogEnd;// Offset=0x10 Size=0x8
};
