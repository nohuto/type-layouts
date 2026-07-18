struct _AUX_PROCESS_MODULE_INFORMATION// Size=0x128 (Id=5606)
{
    void * Section;// Offset=0x0 Size=0x8
    void * MappedBase;// Offset=0x8 Size=0x8
    void * ImageBase;// Offset=0x10 Size=0x8
    unsigned long ImageSize;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
    unsigned short LoadOrderIndex;// Offset=0x20 Size=0x2
    unsigned short InitOrderIndex;// Offset=0x22 Size=0x2
    unsigned short LoadCount;// Offset=0x24 Size=0x2
    unsigned short OffsetToFileName;// Offset=0x26 Size=0x2
    unsigned char FullPathName[256];// Offset=0x28 Size=0x100
};

struct _AUX_PROCESS_MODULES// Size=0x130 (Id=5605)
{
    unsigned long NumberOfModules;// Offset=0x0 Size=0x4
    struct _AUX_PROCESS_MODULE_INFORMATION Modules[1];// Offset=0x8 Size=0x128
};
