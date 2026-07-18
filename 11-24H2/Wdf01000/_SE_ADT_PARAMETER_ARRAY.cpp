enum _SE_ADT_PARAMETER_TYPE
{
    SeAdtParmTypeNone=0,
    SeAdtParmTypeString=1,
    SeAdtParmTypeFileSpec=2,
    SeAdtParmTypeUlong=3,
    SeAdtParmTypeSid=4,
    SeAdtParmTypeLogonId=5,
    SeAdtParmTypeNoLogonId=6,
    SeAdtParmTypeAccessMask=7,
    SeAdtParmTypePrivs=8,
    SeAdtParmTypeObjectTypes=9,
    SeAdtParmTypeHexUlong=10,
    SeAdtParmTypePtr=11,
    SeAdtParmTypeTime=12,
    SeAdtParmTypeGuid=13,
    SeAdtParmTypeLuid=14,
    SeAdtParmTypeHexInt64=15,
    SeAdtParmTypeStringList=16,
    SeAdtParmTypeSidList=17,
    SeAdtParmTypeDuration=18,
    SeAdtParmTypeUserAccountControl=19,
    SeAdtParmTypeNoUac=20,
    SeAdtParmTypeMessage=21,
    SeAdtParmTypeDateTime=22,
    SeAdtParmTypeSockAddr=23,
    SeAdtParmTypeSD=24,
    SeAdtParmTypeLogonHours=25,
    SeAdtParmTypeLogonIdNoSid=26,
    SeAdtParmTypeUlongNoConv=27,
    SeAdtParmTypeSockAddrNoPort=28,
    SeAdtParmTypeAccessReason=29,
    SeAdtParmTypeStagingReason=30,
    SeAdtParmTypeResourceAttribute=31,
    SeAdtParmTypeClaims=32,
    SeAdtParmTypeLogonIdAsSid=33,
    SeAdtParmTypeMultiSzString=34,
    SeAdtParmTypeLogonIdEx=35
};

struct _SE_ADT_PARAMETER_ARRAY_ENTRY// Size=0x20 (Id=1798)
{
    enum _SE_ADT_PARAMETER_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned long long Data[2];// Offset=0x8 Size=0x10
    void * Address;// Offset=0x18 Size=0x8
};

struct _SE_ADT_PARAMETER_ARRAY// Size=0x418 (Id=2522)
{
    unsigned long CategoryId;// Offset=0x0 Size=0x4
    unsigned long AuditId;// Offset=0x4 Size=0x4
    unsigned long ParameterCount;// Offset=0x8 Size=0x4
    unsigned long Length;// Offset=0xc Size=0x4
    unsigned short FlatSubCategoryId;// Offset=0x10 Size=0x2
    unsigned short Type;// Offset=0x12 Size=0x2
    unsigned long Flags;// Offset=0x14 Size=0x4
    struct _SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[32];// Offset=0x18 Size=0x400
};
