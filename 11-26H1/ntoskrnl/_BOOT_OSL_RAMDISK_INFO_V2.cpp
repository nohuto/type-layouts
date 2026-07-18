struct _BOOT_OSL_RAMDISK_ENTRY_V2// Size=0x20 (Id=2640)
{
    unsigned long BlockSize;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    unsigned long long Size;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    unsigned long SiblingIndex;// Offset=0x1c Size=0x4
};

struct _BOOT_OSL_RAMDISK_INFO_V2// Size=0x30 (Id=2533)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long EntrySize;// Offset=0xc Size=0x4
    struct _BOOT_OSL_RAMDISK_ENTRY_V2 Entries[1];// Offset=0x10 Size=0x20
};
