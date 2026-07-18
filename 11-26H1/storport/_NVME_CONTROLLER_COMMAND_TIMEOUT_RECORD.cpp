struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_CONTROLLER_COMMAND_TIMEOUT_RECORD// Size=0x70 (Id=1294)
{
    union _LARGE_INTEGER Timestamp;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER InitiatedTimestamp;// Offset=0x8 Size=0x8
    struct NVME_COMMAND TimedOutCommand;// Offset=0x10 Size=0x40
    struct _IRP * Irp;// Offset=0x50 Size=0x8
    unsigned long NamespaceId;// Offset=0x58 Size=0x4
    unsigned long TransferSizeInBytes;// Offset=0x5c Size=0x4
    unsigned short SQID;// Offset=0x60 Size=0x2
    unsigned short CommandSlot;// Offset=0x62 Size=0x2
    unsigned short InitiatingProcessor;// Offset=0x64 Size=0x2
    unsigned short TimeoutInSeconds;// Offset=0x66 Size=0x2
    unsigned char Flags;// Offset=0x68 Size=0x1
    unsigned char Reserved[7];// Offset=0x69 Size=0x7
};
