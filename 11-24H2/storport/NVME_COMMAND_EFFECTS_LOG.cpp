struct NVME_COMMAND_EFFECTS_LOG// Size=0x1000 (Id=1212)
{
    union NVME_COMMAND_EFFECTS_DATA ACS[256];// Offset=0x0 Size=0x400
    union NVME_COMMAND_EFFECTS_DATA IOCS[256];// Offset=0x400 Size=0x400
    unsigned char Reserved[2048];// Offset=0x800 Size=0x800
};
