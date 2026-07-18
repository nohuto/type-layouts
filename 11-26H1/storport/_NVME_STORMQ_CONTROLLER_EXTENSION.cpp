struct _unnamed_492// Size=0x8 (Id=492)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Reserved:64;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x40
    };
};

struct _NVME_STORMQ_CONTROLLER_EXTENSION// Size=0x80 (Id=493)
{
    struct _NVME_CONTROLLER * Controller;// Offset=0x0 Size=0x8
    unsigned long PreferredNode;// Offset=0x8 Size=0x4
    unsigned long SQMiniportContextSize;// Offset=0xc Size=0x4
    struct _unnamed_492 Flags;// Offset=0x10 Size=0x8
    unsigned char MiniportExtension[1];// Offset=0x40 Size=0x1
};
