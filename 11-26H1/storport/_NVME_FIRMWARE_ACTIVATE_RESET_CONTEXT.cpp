struct _NVME_FIRMWARE_ACTIVATE_RESET_CONTEXT// Size=0x28 (Id=832)
{
    struct _NVME_EXTENDED_COMMAND * ExtendedCommand;// Offset=0x0 Size=0x8
    void  ( * Callback)(struct _NVME_CONTROLLER * ,unsigned char ,void * );// Offset=0x8 Size=0x8
    void * CallbackContext;// Offset=0x10 Size=0x8
    unsigned char NvmReset;// Offset=0x18 Size=0x1
    struct _IO_WORKITEM * WorkItem;// Offset=0x20 Size=0x8
};
