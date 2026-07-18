union _AMD_MCA_IPID// Size=0x8 (Id=124)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long InstanceId:32;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x20
        unsigned long long HardwareId:12;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0xc
        unsigned long long Reserved:4;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x4
        unsigned long long McaType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
};
