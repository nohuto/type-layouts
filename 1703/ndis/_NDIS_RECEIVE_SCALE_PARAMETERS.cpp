struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _PROCESSOR_NUMBER// Size=0x4 (Id=477)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _NDIS_RECEIVE_SCALE_PARAMETERS// Size=0x2c (Id=744)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short BaseCpuNumber;// Offset=0x6 Size=0x2
    unsigned long HashInformation;// Offset=0x8 Size=0x4
    unsigned short IndirectionTableSize;// Offset=0xc Size=0x2
    unsigned long IndirectionTableOffset;// Offset=0x10 Size=0x4
    unsigned short HashSecretKeySize;// Offset=0x14 Size=0x2
    unsigned long HashSecretKeyOffset;// Offset=0x18 Size=0x4
    unsigned long ProcessorMasksOffset;// Offset=0x1c Size=0x4
    unsigned long NumberOfProcessorMasks;// Offset=0x20 Size=0x4
    unsigned long ProcessorMasksEntrySize;// Offset=0x24 Size=0x4
    struct _PROCESSOR_NUMBER DefaultProcessorNumber;// Offset=0x28 Size=0x4
};
