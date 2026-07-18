enum _NDK_OBJECT_TYPE
{
    NdkObjectTypeUndefined=0,
    NdkObjectTypeAdapter=1,
    NdkObjectTypeQp=2,
    NdkObjectTypeCq=3,
    NdkObjectTypeMr=4,
    NdkObjectTypeMw=5,
    NdkObjectTypePd=6,
    NdkObjectTypeSharedEndpoint=7,
    NdkObjectTypeConnector=8,
    NdkObjectTypeListener=9,
    NdkObjectTypeSrq=10,
    NdkObjectTypeMax=11
};

struct _NDK_OBJECT_HEADER_RESERVED_BLOCK// Size=0x20 (Id=1824)
{
    void * rf[4];// Offset=0x0 Size=0x20
};

struct _NDK_OBJECT_HEADER// Size=0x28 (Id=1409)
{
    struct NDK_VERSION Version;// Offset=0x0 Size=0x4
    enum _NDK_OBJECT_TYPE ObjectType;// Offset=0x4 Size=0x4
    struct _NDK_OBJECT_HEADER_RESERVED_BLOCK NdkReserved;// Offset=0x8 Size=0x20
};

struct _NDK_QP// Size=0x30 (Id=1683)
{
    struct _NDK_OBJECT_HEADER Header;// Offset=0x0 Size=0x28
    struct _NDK_QP_DISPATCH * Dispatch;// Offset=0x28 Size=0x8
};
