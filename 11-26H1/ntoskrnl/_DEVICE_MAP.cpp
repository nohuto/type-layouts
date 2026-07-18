struct _EX_FAST_REF// Size=0x8 (Id=551)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _DEVICE_MAP// Size=0x128 (Id=1252)
{
    struct _OBJECT_DIRECTORY * DosDevicesDirectory;// Offset=0x0 Size=0x8
    struct _OBJECT_DIRECTORY * GlobalDosDevicesDirectory;// Offset=0x8 Size=0x8
    struct _EJOB * ServerSilo;// Offset=0x10 Size=0x8
    struct _DEVICE_MAP * GlobalDeviceMap;// Offset=0x18 Size=0x8
    struct _EX_FAST_REF DriveObject[26];// Offset=0x20 Size=0xd0
    long long ReferenceCount;// Offset=0xf0 Size=0x8
    void * DosDevicesDirectoryHandle;// Offset=0xf8 Size=0x8
    unsigned long DriveMap;// Offset=0x100 Size=0x4
    unsigned char DriveType[32];// Offset=0x104 Size=0x20
};
