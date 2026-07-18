struct _OBP_LOOKUP_CONTEXT// Size=0x18 (Id=972)
{
    struct _OBJECT_DIRECTORY * Directory;// Offset=0x0 Size=0x8
    struct _OBJECT_DIRECTORY_ENTRY ** EntryLink;// Offset=0x8 Size=0x8
    unsigned long HashValue;// Offset=0x10 Size=0x4
    unsigned char HashIndex;// Offset=0x14 Size=0x1
    unsigned char LockedExclusive;// Offset=0x15 Size=0x1
    unsigned char DirectoryReferenced;// Offset=0x16 Size=0x1
    unsigned char Unused;// Offset=0x17 Size=0x1
};
