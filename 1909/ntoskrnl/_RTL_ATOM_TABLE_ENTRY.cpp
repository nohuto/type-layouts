struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_ATOM_TABLE_REFERENCE// Size=0x18 (Id=1477)
{
    struct _LIST_ENTRY LowBoxList;// Offset=0x0 Size=0x10
    unsigned long LowBoxID;// Offset=0x10 Size=0x4
    unsigned short ReferenceCount;// Offset=0x14 Size=0x2
    unsigned short Flags;// Offset=0x16 Size=0x2
};

struct _RTL_ATOM_TABLE_ENTRY// Size=0x30 (Id=1019)
{
    struct _RTL_ATOM_TABLE_ENTRY * HashLink;// Offset=0x0 Size=0x8
    unsigned short HandleIndex;// Offset=0x8 Size=0x2
    unsigned short Atom;// Offset=0xa Size=0x2
    struct _RTL_ATOM_TABLE_REFERENCE Reference;// Offset=0x10 Size=0x18
    unsigned char NameLength;// Offset=0x28 Size=0x1
    wchar_t Name[1];// Offset=0x2a Size=0x2
};
