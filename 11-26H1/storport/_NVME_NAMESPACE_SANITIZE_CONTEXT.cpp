struct _NVME_NAMESPACE_SANITIZE_CONTEXT// Size=0x20 (Id=770)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    struct _IRP * Irp;// Offset=0x8 Size=0x8
    struct _IO_WORKITEM * WorkItem;// Offset=0x10 Size=0x8
    unsigned short TimeoutInSeconds;// Offset=0x18 Size=0x2
    unsigned char SanitizeRecovery;// Offset=0x1a Size=0x1
    unsigned long InProgress;// Offset=0x1c Size=0x4
};
