enum _SYSTEM_FIRMWARE_TABLE_ACTION
{
    SystemFirmwareTable_Enumerate=0,
    SystemFirmwareTable_Get=1
};

struct _SYSTEM_FIRMWARE_TABLE_INFORMATION// Size=0x14 (Id=3611)
{
    unsigned long ProviderSignature;// Offset=0x0 Size=0x4
    enum _SYSTEM_FIRMWARE_TABLE_ACTION Action;// Offset=0x4 Size=0x4
    unsigned long TableID;// Offset=0x8 Size=0x4
    unsigned long TableBufferLength;// Offset=0xc Size=0x4
    unsigned char TableBuffer[1];// Offset=0x10 Size=0x1
};
