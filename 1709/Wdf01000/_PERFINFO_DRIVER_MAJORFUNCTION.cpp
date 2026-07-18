struct _PERFINFO_DRIVER_MAJORFUNCTION// Size=0x24 (Id=4157)
{
    unsigned long MajorFunction;// Offset=0x0 Size=0x4
    unsigned long MinorFunction;// Offset=0x4 Size=0x4
    void * RoutineAddr;// Offset=0x8 Size=0x8
    void * FileNamePointer;// Offset=0x10 Size=0x8
    void * Irp;// Offset=0x18 Size=0x8
    unsigned long UniqMatchId;// Offset=0x20 Size=0x4
};
