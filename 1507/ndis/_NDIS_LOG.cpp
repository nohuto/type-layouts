struct _NDIS_LOG// Size=0x30 (Id=1116)
{
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x0 Size=0x8
    unsigned long long LogLock;// Offset=0x8 Size=0x8
    struct _IRP * Irp;// Offset=0x10 Size=0x8
    unsigned int TotalSize;// Offset=0x18 Size=0x4
    unsigned int CurrentSize;// Offset=0x1c Size=0x4
    unsigned int InPtr;// Offset=0x20 Size=0x4
    unsigned int OutPtr;// Offset=0x24 Size=0x4
    unsigned char LogBuf[1];// Offset=0x28 Size=0x1
};
