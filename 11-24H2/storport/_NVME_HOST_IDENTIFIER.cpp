struct _unnamed_758// Size=0x1 (Id=758)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char HostIDExist:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ExtendedHostIDRequested:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char HostIDSet:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ExtendedHostIDEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _NVME_HOST_IDENTIFIER// Size=0x11 (Id=759)
{
    struct _unnamed_758 Flags;// Offset=0x0 Size=0x1
    unsigned char HostID[16];// Offset=0x1 Size=0x10
};
