struct _UNICODE_STRING// Size=0x10 (Id=26)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    unsigned short * Buffer;// Offset=0x8 Size=0x8
};

struct _OBJECT_HEADER_NAME_INFO// Size=0x20 (Id=461)
{
    struct _OBJECT_DIRECTORY * Directory;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x8 Size=0x10
    long ReferenceCount;// Offset=0x18 Size=0x4
};
