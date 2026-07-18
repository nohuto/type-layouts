union _WHEA_REVISION// Size=0x2 (Id=272)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS// Size=0x1 (Id=404)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FRUId:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char FRUText:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS// Size=0x4 (Id=321)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Primary:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ContainmentWarning:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reset:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ThresholdExceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ResourceNotAvailable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long LatentError:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _GUID// Size=0x10 (Id=92)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR// Size=0x48 (Id=179)
{
    unsigned long SectionOffset;// Offset=0x0 Size=0x4
    unsigned long SectionLength;// Offset=0x4 Size=0x4
    union _WHEA_REVISION Revision;// Offset=0x8 Size=0x2
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS ValidBits;// Offset=0xa Size=0x1
    unsigned char Reserved;// Offset=0xb Size=0x1
    union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS Flags;// Offset=0xc Size=0x4
    struct _GUID SectionType;// Offset=0x10 Size=0x10
    struct _GUID FRUId;// Offset=0x20 Size=0x10
    enum _WHEA_ERROR_SEVERITY SectionSeverity;// Offset=0x30 Size=0x4
    char FRUText[20];// Offset=0x34 Size=0x14
};
