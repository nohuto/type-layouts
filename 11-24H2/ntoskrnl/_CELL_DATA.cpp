struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CHILD_LIST// Size=0x8 (Id=1601)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long List;// Offset=0x4 Size=0x4
};

struct _CM_KEY_REFERENCE// Size=0x10 (Id=1302)
{
    unsigned long KeyCell;// Offset=0x0 Size=0x4
    struct _HHIVE * KeyHive;// Offset=0x8 Size=0x8
};

struct _CM_KEY_NODE// Size=0x50 (Id=712)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Flags;// Offset=0x2 Size=0x2
    union _LARGE_INTEGER LastWriteTime;// Offset=0x4 Size=0x8
    unsigned char AccessBits;// Offset=0xc Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LayerSemantics:2;// Offset=0xd Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Spare1:5;// Offset=0xd Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char InheritClass:1;// Offset=0xd Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned short Spare2;// Offset=0xe Size=0x2
    unsigned long Parent;// Offset=0x10 Size=0x4
    unsigned long SubKeyCounts[2];// Offset=0x14 Size=0x8
    union // Size=0x2c (Id=0)
    {
        unsigned long SubKeyLists[2];// Offset=0x1c Size=0x8
        struct _CHILD_LIST ValueList;// Offset=0x24 Size=0x8
        struct _CM_KEY_REFERENCE ChildHiveReference;// Offset=0x1c Size=0x10
    };
    unsigned long Security;// Offset=0x2c Size=0x4
    unsigned long Class;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaxNameLen:16;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long UserFlags:4;// Offset=0x34 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long VirtControlFlags:4;// Offset=0x34 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long Debug:8;// Offset=0x34 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long MaxClassLen;// Offset=0x38 Size=0x4
    unsigned long MaxValueNameLen;// Offset=0x3c Size=0x4
    unsigned long MaxValueDataLen;// Offset=0x40 Size=0x4
    unsigned long WorkVar;// Offset=0x44 Size=0x4
    unsigned short NameLength;// Offset=0x48 Size=0x2
    unsigned short ClassLength;// Offset=0x4a Size=0x2
    wchar_t Name[1];// Offset=0x4c Size=0x2
};

struct _CM_KEY_VALUE// Size=0x18 (Id=714)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short NameLength;// Offset=0x2 Size=0x2
    unsigned long DataLength;// Offset=0x4 Size=0x4
    unsigned long Data;// Offset=0x8 Size=0x4
    unsigned long Type;// Offset=0xc Size=0x4
    unsigned short Flags;// Offset=0x10 Size=0x2
    unsigned short Spare;// Offset=0x12 Size=0x2
    wchar_t Name[1];// Offset=0x14 Size=0x2
};

struct _SECURITY_DESCRIPTOR_RELATIVE// Size=0x14 (Id=1991)
{
    unsigned char Revision;// Offset=0x0 Size=0x1
    unsigned char Sbz1;// Offset=0x1 Size=0x1
    unsigned short Control;// Offset=0x2 Size=0x2
    unsigned long Owner;// Offset=0x4 Size=0x4
    unsigned long Group;// Offset=0x8 Size=0x4
    unsigned long Sacl;// Offset=0xc Size=0x4
    unsigned long Dacl;// Offset=0x10 Size=0x4
};

struct _CM_KEY_SECURITY// Size=0x28 (Id=2107)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Reserved;// Offset=0x2 Size=0x2
    unsigned long Flink;// Offset=0x4 Size=0x4
    unsigned long Blink;// Offset=0x8 Size=0x4
    unsigned long ReferenceCount;// Offset=0xc Size=0x4
    unsigned long DescriptorLength;// Offset=0x10 Size=0x4
    struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;// Offset=0x14 Size=0x14
};

struct _CM_KEY_INDEX// Size=0x8 (Id=2170)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
    unsigned long List[1];// Offset=0x4 Size=0x4
};

struct _CM_BIG_DATA// Size=0x8 (Id=2288)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
    unsigned long List;// Offset=0x4 Size=0x4
};

union _u// Size=0x50 (Id=2079)
{
    union // Size=0x50 (Id=0)
    {
        struct _CM_KEY_NODE KeyNode;// Offset=0x0 Size=0x50
        struct _CM_KEY_VALUE KeyValue;// Offset=0x0 Size=0x18
        struct _CM_KEY_SECURITY KeySecurity;// Offset=0x0 Size=0x28
        struct _CM_KEY_INDEX KeyIndex;// Offset=0x0 Size=0x8
        struct _CM_BIG_DATA ValueData;// Offset=0x0 Size=0x8
        unsigned long KeyList[1];// Offset=0x0 Size=0x4
        wchar_t KeyString[1];// Offset=0x0 Size=0x2
    };
};

struct _CELL_DATA// Size=0x50 (Id=1816)
{
    union _u u;// Offset=0x0 Size=0x50
};
