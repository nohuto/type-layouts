struct NVME_IDENTIFY_NVM_SPECIFIC_CONTROLLER_IO_COMMAND_SET// Size=0x1000 (Id=543)
{
    unsigned char VSL;// Offset=0x0 Size=0x1
    unsigned char WZSL;// Offset=0x1 Size=0x1
    unsigned char WUSL;// Offset=0x2 Size=0x1
    unsigned char DMRL;// Offset=0x3 Size=0x1
    unsigned long DMRSL;// Offset=0x4 Size=0x4
    unsigned long long DMSL;// Offset=0x8 Size=0x8
    unsigned char Reserved[4080];// Offset=0x10 Size=0xff0
};
