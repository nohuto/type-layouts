struct _BOOT_RECORD// Size=0x10 (Id=2141)
{
    unsigned long long BootFlags;// Offset=0x0 Size=0x8
    unsigned long FirmwareType;// Offset=0x8 Size=0x4
    unsigned char SecureBootEnabled;// Offset=0xc Size=0x1
    unsigned char SecureBootCapable;// Offset=0xd Size=0x1
    unsigned char Reserved1;// Offset=0xe Size=0x1
    unsigned char Reserved2;// Offset=0xf Size=0x1
};
