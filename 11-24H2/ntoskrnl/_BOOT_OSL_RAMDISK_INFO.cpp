struct _BOOT_OSL_RAMDISK_ENTRY// Size=0x18 (Id=2430)
{
    unsigned long BlockSize;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    unsigned long long Size;// Offset=0x10 Size=0x8
};

struct _BOOT_OSL_RAMDISK_INFO// Size=0x20 (Id=2362)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _BOOT_OSL_RAMDISK_ENTRY Entries[1];// Offset=0x8 Size=0x18
};
