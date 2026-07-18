struct _CM_EISA_SLOT_INFORMATION// Size=0xc (Id=3547)
{
    unsigned char ReturnCode;// Offset=0x0 Size=0x1
    unsigned char ReturnFlags;// Offset=0x1 Size=0x1
    unsigned char MajorRevision;// Offset=0x2 Size=0x1
    unsigned char MinorRevision;// Offset=0x3 Size=0x1
    unsigned short Checksum;// Offset=0x4 Size=0x2
    unsigned char NumberFunctions;// Offset=0x6 Size=0x1
    unsigned char FunctionInformation;// Offset=0x7 Size=0x1
    unsigned long CompressedId;// Offset=0x8 Size=0x4
};
