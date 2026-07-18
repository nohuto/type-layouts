struct NVME_IDENTIFY_NAMESPACE_DESCRIPTOR// Size=0x5 (Id=546)
{
    unsigned char NIDT;// Offset=0x0 Size=0x1
    unsigned char NIDL;// Offset=0x1 Size=0x1
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
    unsigned char NID[1];// Offset=0x4 Size=0x1
};
