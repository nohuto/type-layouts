struct _HV_GET_BIN_CONTEXT// Size=0x2 (Id=1561)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short OutstandingReference:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
};

struct _HV_GET_CELL_CONTEXT// Size=0x8 (Id=653)
{
    unsigned long Cell;// Offset=0x0 Size=0x4
    struct _HV_GET_BIN_CONTEXT BinContext;// Offset=0x4 Size=0x2
};
