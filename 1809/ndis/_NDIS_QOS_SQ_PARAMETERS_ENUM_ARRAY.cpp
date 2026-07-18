struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_QOS_SQ_TYPE
{
    NdisQosSqTypeUndefined=0,
    NdisQosSqTypeStandard=1,
    NdisQosSqTypeGFT=2,
    NdisQosSqTypeMax=3
};

struct _NDIS_QOS_SQ_PARAMETERS_ENUM_ARRAY// Size=0x20 (Id=1765)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_QOS_SQ_TYPE SqType;// Offset=0x8 Size=0x4
    unsigned long FirstSqId;// Offset=0xc Size=0x4
    unsigned long MaxSqsToReturn;// Offset=0x10 Size=0x4
    unsigned long SqParamsArrayOffset;// Offset=0x14 Size=0x4
    unsigned long SqParamsArrayNumElements;// Offset=0x18 Size=0x4
    unsigned long SqParamsArrayElementSize;// Offset=0x1c Size=0x4
};
