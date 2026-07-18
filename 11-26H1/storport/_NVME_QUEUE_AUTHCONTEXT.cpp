struct _NVME_QUEUE_AUTHCONTEXT// Size=0x1628 (Id=1076)
{
    unsigned short T_ID;// Offset=0x0 Size=0x2
    unsigned char SC_C;// Offset=0x2 Size=0x1
    unsigned char HashID;// Offset=0x3 Size=0x1
    unsigned char DHgID;// Offset=0x4 Size=0x1
    unsigned char Flags;// Offset=0x5 Size=0x1
    unsigned char Reserved0[2];// Offset=0x6 Size=0x2
    unsigned long S1;// Offset=0x8 Size=0x4
    unsigned long S2;// Offset=0xc Size=0x4
    void * AlgHandle;// Offset=0x10 Size=0x8
    void * HostPrivKeyHandle;// Offset=0x18 Size=0x8
    struct _BCRYPT_DH_KEY_BLOB * HostPubKeyBlob;// Offset=0x20 Size=0x8
    unsigned char SharedDHValue[1024];// Offset=0x28 Size=0x400
    unsigned char CtrlChgValue[256];// Offset=0x428 Size=0x100
    unsigned char HostChgValue[256];// Offset=0x528 Size=0x100
    unsigned char Buffer[4096];// Offset=0x628 Size=0x1000
};
