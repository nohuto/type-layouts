enum _OBJECT_CLOSE_TYPE
{
    ObjectCloseResultNotSupported=0,
    ObjectCloseFile=1
};

struct _OBJECT_CLOSE_RESULT// Size=0xc (Id=629)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _OBJECT_CLOSE_TYPE ObjectType;// Offset=0x4 Size=0x4
    unsigned long File;// Offset=0x8 Size=0x4
};
