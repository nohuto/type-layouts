struct _AUX_MODULE_BASIC_INFO// Size=0x8 (Id=3892)
{
    void * ImageBase;// Offset=0x0 Size=0x8
};

struct _AUX_MODULE_EXTENDED_INFO// Size=0x110 (Id=3893)
{
    struct _AUX_MODULE_BASIC_INFO BasicInfo;// Offset=0x0 Size=0x8
    unsigned long ImageSize;// Offset=0x8 Size=0x4
    unsigned short FileNameOffset;// Offset=0xc Size=0x2
    unsigned char FullPathName[256];// Offset=0xe Size=0x100
};
