union _WHEA_GENERIC_ERROR_BLOCKSTATUS// Size=0x4 (Id=2544)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UncorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CorrectableError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MultipleUncorrectableErrors:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MultipleCorrectableErrors:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ErrorDataEntryCount:10;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0xa
        unsigned long Reserved:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

struct _WHEA_GENERIC_ERROR// Size=0x15 (Id=235)
{
    union _WHEA_GENERIC_ERROR_BLOCKSTATUS BlockStatus;// Offset=0x0 Size=0x4
    unsigned long RawDataOffset;// Offset=0x4 Size=0x4
    unsigned long RawDataLength;// Offset=0x8 Size=0x4
    unsigned long DataLength;// Offset=0xc Size=0x4
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;// Offset=0x10 Size=0x4
    unsigned char Data[1];// Offset=0x14 Size=0x1
};
