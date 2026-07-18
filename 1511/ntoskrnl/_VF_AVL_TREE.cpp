union _unnamed_1239// Size=0x4 (Id=1239)
{
    unsigned long NodeSize;// Offset=0x0 Size=0x4
    unsigned long UseLookaside;// Offset=0x0 Size=0x4
};

struct _VF_AVL_TREE// Size=0x20 (Id=1240)
{
    unsigned long long NodeRangeSize;// Offset=0x0 Size=0x8
    unsigned long long NodeCount;// Offset=0x8 Size=0x8
    struct _VF_AVL_TABLE * Tables;// Offset=0x10 Size=0x8
    unsigned long TablesNo;// Offset=0x18 Size=0x4
    union _unnamed_1239 u1;// Offset=0x1c Size=0x4
};
