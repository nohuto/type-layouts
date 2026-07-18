struct _PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO// Size=0x10 (Id=2681)
{
    union // Size=0xe (Id=0)
    {
        void * FileObject;// Offset=0x0 Size=0x8
        unsigned long DeviceCharacteristics;// Offset=0x8 Size=0x4
        unsigned short FileCharacteristics;// Offset=0xc Size=0x2
        union <unnamed-type-Flags>// Size=0x2 (Id=14821)
        {
            unsigned short Flags;// Offset=0x0 Size=0x2
            unsigned short ActiveDataReference:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short DeviceEjectable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short WritableHandles:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        };
        union _PERFINFO_IMAGELOAD_IN_PAGEFILE_INFO::<unnamed-type-Flags> Flags;// Offset=0xe Size=0x2
    };
};
