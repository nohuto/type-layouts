struct _PERFINFO_FILE_READ_WRITE// Size=0x30 (Id=2917)
{
    unsigned long long Offset;// Offset=0x0 Size=0x8
    unsigned long long Irp;// Offset=0x8 Size=0x8
    unsigned long long FileObject;// Offset=0x10 Size=0x8
    unsigned long long FileKey;// Offset=0x18 Size=0x8
    unsigned long IssuingThreadId;// Offset=0x20 Size=0x4
    unsigned long Size;// Offset=0x24 Size=0x4
    unsigned long Flags;// Offset=0x28 Size=0x4
    unsigned long ExtraFlags;// Offset=0x2c Size=0x4
};
