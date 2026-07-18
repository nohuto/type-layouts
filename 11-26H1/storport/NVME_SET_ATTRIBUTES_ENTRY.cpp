struct NVME_SET_ATTRIBUTES_ENTRY// Size=0x80 (Id=981)
{
    unsigned short Identifier;// Offset=0x0 Size=0x2
    unsigned short ENDGID;// Offset=0x2 Size=0x2
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    unsigned long Random4KBReadTypical;// Offset=0x8 Size=0x4
    unsigned long OptimalWriteSize;// Offset=0xc Size=0x4
    unsigned char TotalCapacity[16];// Offset=0x10 Size=0x10
    unsigned char UnallocatedCapacity[16];// Offset=0x20 Size=0x10
    unsigned char Reserved2[80];// Offset=0x30 Size=0x50
};
