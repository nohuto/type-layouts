struct NVME_ICE_IO_DESCRIPTOR// Size=0x48 (Id=952)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long LBACount;// Offset=0x4 Size=0x4
    unsigned long PRPCount;// Offset=0x8 Size=0x4
    void * KeyHandle;// Offset=0x10 Size=0x8
    unsigned char IV[16];// Offset=0x18 Size=0x10
    void * IOContext;// Offset=0x28 Size=0x8
    union NVME_PRP_ENTRY * PRP1;// Offset=0x30 Size=0x8
    union NVME_PRP_ENTRY * PRP2;// Offset=0x38 Size=0x8
    union NVME_PRP_ENTRY * PRPEntries;// Offset=0x40 Size=0x8
};
