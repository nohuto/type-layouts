struct _NVME_NVM_SUBSYSTEM_RESET// Size=0x4 (Id=769)
{
    unsigned long NSSRC;// Offset=0x0 Size=0x4
};

struct _NVME_NVM_SUBSYSTEM_SHUTDOWN// Size=0x4 (Id=1048)
{
    unsigned long NSSC;// Offset=0x0 Size=0x4
};

union _NVME_CONTROLLER_READY_TIMEOUTS// Size=0x4 (Id=789)
{
    unsigned short CRWMT;// Offset=0x0 Size=0x2
    unsigned short CRIMT;// Offset=0x2 Size=0x2
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct NVME_CONTROLLER_REGISTERS// Size=0x1000 (Id=499)
{
    union NVME_CONTROLLER_CAPABILITIES CAP;// Offset=0x0 Size=0x8
    union NVME_VERSION VS;// Offset=0x8 Size=0x4
    unsigned long INTMS;// Offset=0xc Size=0x4
    unsigned long INTMC;// Offset=0x10 Size=0x4
    union NVME_CONTROLLER_CONFIGURATION CC;// Offset=0x14 Size=0x4
    unsigned long Reserved0;// Offset=0x18 Size=0x4
    union NVME_CONTROLLER_STATUS CSTS;// Offset=0x1c Size=0x4
    struct _NVME_NVM_SUBSYSTEM_RESET NSSR;// Offset=0x20 Size=0x4
    union NVME_ADMIN_QUEUE_ATTRIBUTES AQA;// Offset=0x24 Size=0x4
    union NVME_ADMIN_SUBMISSION_QUEUE_BASE_ADDRESS ASQ;// Offset=0x28 Size=0x8
    union NVME_ADMIN_COMPLETION_QUEUE_BASE_ADDRESS ACQ;// Offset=0x30 Size=0x8
    union NVME_CONTROLLER_MEMORY_BUFFER_LOCATION CMBLOC;// Offset=0x38 Size=0x4
    union NVME_CONTROLLER_MEMORY_BUFFER_SIZE CMBSZ;// Offset=0x3c Size=0x4
    unsigned long Reserved1[9];// Offset=0x40 Size=0x24
    struct _NVME_NVM_SUBSYSTEM_SHUTDOWN NSSD;// Offset=0x64 Size=0x4
    union _NVME_CONTROLLER_READY_TIMEOUTS CRTO;// Offset=0x68 Size=0x4
    unsigned long Reserved2[933];// Offset=0x6c Size=0xe94
    unsigned long Reserved3[64];// Offset=0xf00 Size=0x100
    unsigned long Doorbells[0];
};
