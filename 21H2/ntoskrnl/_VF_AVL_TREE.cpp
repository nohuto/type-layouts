union _anonymous_1131// Size=0x4 (Id=1131)
{
    unsigned long NodeSize;// Offset=0x0 Size=0x4
    unsigned long UseLookaside;// Offset=0x0 Size=0x4
};

struct _VF_AVL_TREE// Size=0x28 (Id=1132)
{
    unsigned long long NodeRangeSize;// Offset=0x0 Size=0x8
    unsigned long long NodeCount;// Offset=0x8 Size=0x8
    struct _VF_AVL_TABLE * Tables;// Offset=0x10 Size=0x8
    unsigned long TablesNo;// Offset=0x18 Size=0x4
    unsigned char UseSessionId;// Offset=0x1c Size=0x1
    union _anonymous_1131 u1;// Offset=0x20 Size=0x4
};
