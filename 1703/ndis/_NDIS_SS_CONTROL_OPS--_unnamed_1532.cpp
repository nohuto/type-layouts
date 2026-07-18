union _NDIS_SS_CONTROL_OPS::_unnamed_1532// Size=0x4 (Id=1532)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Oid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Pause:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Restart:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reset:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CheckForHang:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
    unsigned long Value;// Offset=0x0 Size=0x4
};
