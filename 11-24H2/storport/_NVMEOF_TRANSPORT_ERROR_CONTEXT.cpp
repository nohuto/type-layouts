struct _STOR_NVMEOF_NOTIFICATION_TRANSPORT_FATAL_ERR// Size=0x42 (Id=1020)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char ErrorDescription[64];// Offset=0x2 Size=0x40
};

struct _NVMEOF_TRANSPORT_ERROR_CONTEXT// Size=0x48 (Id=938)
{
    unsigned long QueueId;// Offset=0x0 Size=0x4
    struct _STOR_NVMEOF_NOTIFICATION_TRANSPORT_FATAL_ERR Error;// Offset=0x4 Size=0x42
};
