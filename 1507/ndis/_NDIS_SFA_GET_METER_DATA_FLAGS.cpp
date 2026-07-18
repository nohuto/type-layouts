union _NDIS_SFA_GET_METER_DATA_FLAGS// Size=0x4 (Id=595)
{
    unsigned int AsUlong;// Offset=0x0 Size=0x4
    struct <unnamed-type-Bits>// Size=0x4 (Id=9464)
    {
        unsigned int RemoveRule:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    struct _NDIS_SFA_GET_METER_DATA_FLAGS::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x4
};
