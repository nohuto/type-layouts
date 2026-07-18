union _anonymous_1439// Size=0x8 (Id=1439)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long RemoteImageFileObject:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long RemoteDataFileObject:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};
