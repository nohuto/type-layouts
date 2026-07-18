struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION// Size=0x4 (Id=1705)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageRelativeOffset:12;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xc
        unsigned long IndirectCall:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long IATIndex:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};

struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION// Size=0x2 (Id=1764)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PageRelativeOffset:12;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short IndirectCall:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short RexWPrefix:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
        unsigned short CfgCheck:1;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x1
        unsigned short Reserved:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION// Size=0x2 (Id=2160)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PageRelativeOffset:12;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xc
        unsigned short RegisterNumber:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

union _unnamed_1335// Size=0x4 (Id=1335)
{
    union // Size=0x4 (Id=0)
    {
        struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION Import;// Offset=0x0 Size=0x4
        struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION Indir;// Offset=0x0 Size=0x2
        struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION SwitchJump;// Offset=0x0 Size=0x2
    };
};

struct _RTL_RETPOLINE_RELOCATION_INDEX// Size=0xc (Id=1336)
{
    unsigned short ImportRelocationSize;// Offset=0x0 Size=0x2
    unsigned short IndirectRelocationSize;// Offset=0x2 Size=0x2
    unsigned short SwitchJumpRelocationSize;// Offset=0x4 Size=0x2
    unsigned short StraddleType;// Offset=0x6 Size=0x2
    union _unnamed_1335 StraddleReloc;// Offset=0x8 Size=0x4
};
