struct _WMI_PROCESS_INFORMATION64// Size=0x28 (Id=2151)
{
    unsigned long long UniqueProcessKey64;// Offset=0x0 Size=0x8
    unsigned long ProcessId;// Offset=0x8 Size=0x4
    unsigned long ParentId;// Offset=0xc Size=0x4
    unsigned long SessionId;// Offset=0x10 Size=0x4
    long ExitStatus;// Offset=0x14 Size=0x4
    unsigned long long DirectoryTableBase;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long Sid;// Offset=0x24 Size=0x4
};
