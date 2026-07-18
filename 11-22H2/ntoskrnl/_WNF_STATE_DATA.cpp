struct _WNF_NODE_HEADER// Size=0x4 (Id=979)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _WNF_STATE_DATA// Size=0x10 (Id=1244)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long AllocatedSize;// Offset=0x4 Size=0x4
    unsigned long DataSize;// Offset=0x8 Size=0x4
    unsigned long ChangeStamp;// Offset=0xc Size=0x4
};
