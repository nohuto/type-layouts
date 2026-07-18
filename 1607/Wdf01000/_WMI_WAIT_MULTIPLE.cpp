struct _WMI_WAIT_OBJECT_RECORD// Size=0x10 (Id=1618)
{
    void * Object;// Offset=0x0 Size=0x8
    unsigned char ObjectType;// Offset=0x8 Size=0x1
};

struct _WMI_WAIT_MULTIPLE// Size=0x408 (Id=2565)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned char WaitType;// Offset=0x4 Size=0x1
    unsigned char ObjectCount;// Offset=0x5 Size=0x1
    struct _WMI_WAIT_OBJECT_RECORD ObjectRecord[64];// Offset=0x8 Size=0x400
};
