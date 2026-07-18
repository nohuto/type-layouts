struct _SYSTEM_FIRMWARE_TABLE_HANDLER// Size=0x18 (Id=652)
{
    unsigned long ProviderSignature;// Offset=0x0 Size=0x4
    unsigned char Register;// Offset=0x4 Size=0x1
    long  ( * FirmwareTableHandler)(struct _SYSTEM_FIRMWARE_TABLE_INFORMATION * );// Offset=0x8 Size=0x8
    void * DriverObject;// Offset=0x10 Size=0x8
};
