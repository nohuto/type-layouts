struct _GUID// Size=0x10 (Id=78)
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

union _WHEA_REVISION// Size=0x2 (Id=886)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V1// Size=0x41 (Id=2592)
{
    struct _GUID SectionType;// Offset=0x0 Size=0x10
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;// Offset=0x10 Size=0x4
    union _WHEA_REVISION Revision;// Offset=0x14 Size=0x2
    unsigned char ValidBits;// Offset=0x16 Size=0x1
    unsigned char Flags;// Offset=0x17 Size=0x1
    unsigned long ErrorDataLength;// Offset=0x18 Size=0x4
    struct _GUID FRUId;// Offset=0x1c Size=0x10
    unsigned char FRUText[20];// Offset=0x2c Size=0x14
    unsigned char Data[1];// Offset=0x40 Size=0x1
};
