struct _PERFINFO_FILE_DIRENUM// Size=0x30 (Id=5135)
{
    unsigned long long Irp;// Offset=0x0 Size=0x8
    unsigned long long FileObject;// Offset=0x8 Size=0x8
    unsigned long long FileKey;// Offset=0x10 Size=0x8
    unsigned long IssuingThreadId;// Offset=0x18 Size=0x4
    unsigned long Length;// Offset=0x1c Size=0x4
    unsigned long InfoClass;// Offset=0x20 Size=0x4
    unsigned long FileIndex;// Offset=0x24 Size=0x4
    wchar_t FileName[1];// Offset=0x28 Size=0x2
};
