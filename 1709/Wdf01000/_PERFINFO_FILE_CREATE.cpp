struct _PERFINFO_FILE_CREATE// Size=0x28 (Id=2512)
{
    unsigned long long Irp;// Offset=0x0 Size=0x8
    unsigned long long FileObject;// Offset=0x8 Size=0x8
    unsigned long IssuingThreadId;// Offset=0x10 Size=0x4
    unsigned long Options;// Offset=0x14 Size=0x4
    unsigned long Attributes;// Offset=0x18 Size=0x4
    unsigned long ShareAccess;// Offset=0x1c Size=0x4
    wchar_t OpenPath[1];// Offset=0x20 Size=0x2
};
