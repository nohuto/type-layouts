struct _CLS_LSN// Size=0x8 (Id=2405)
{
    unsigned long long Internal;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=118)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _CLS_INFORMATION// Size=0x78 (Id=1277)
{
    long long TotalAvailable;// Offset=0x0 Size=0x8
    long long CurrentAvailable;// Offset=0x8 Size=0x8
    long long TotalReservation;// Offset=0x10 Size=0x8
    unsigned long long BaseFileSize;// Offset=0x18 Size=0x8
    unsigned long long ContainerSize;// Offset=0x20 Size=0x8
    unsigned long TotalContainers;// Offset=0x28 Size=0x4
    unsigned long FreeContainers;// Offset=0x2c Size=0x4
    unsigned long TotalClients;// Offset=0x30 Size=0x4
    unsigned long Attributes;// Offset=0x34 Size=0x4
    unsigned long FlushThreshold;// Offset=0x38 Size=0x4
    unsigned long SectorSize;// Offset=0x3c Size=0x4
    struct _CLS_LSN MinArchiveTailLsn;// Offset=0x40 Size=0x8
    struct _CLS_LSN BaseLsn;// Offset=0x48 Size=0x8
    struct _CLS_LSN LastFlushedLsn;// Offset=0x50 Size=0x8
    struct _CLS_LSN LastLsn;// Offset=0x58 Size=0x8
    struct _CLS_LSN RestartLsn;// Offset=0x60 Size=0x8
    struct _GUID Identity;// Offset=0x68 Size=0x10
};
