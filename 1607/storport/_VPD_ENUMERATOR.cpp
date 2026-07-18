struct _VPD_ENUMERATOR// Size=0x18 (Id=197)
{
    struct _VPD_IDENTIFICATION_PAGE * pVPDIdPage;// Offset=0x0 Size=0x8
    struct _VPD_IDENTIFICATION_DESCRIPTOR * pCurrentDescriptor;// Offset=0x8 Size=0x8
    unsigned int RealPageLength;// Offset=0x10 Size=0x4
};
