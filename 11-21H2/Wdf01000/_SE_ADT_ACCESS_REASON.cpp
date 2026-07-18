struct _SE_ADT_ACCESS_REASON// Size=0x98 (Id=3361)
{
    unsigned long AccessMask;// Offset=0x0 Size=0x4
    unsigned long AccessReasons[32];// Offset=0x4 Size=0x80
    unsigned long ObjectTypeIndex;// Offset=0x84 Size=0x4
    unsigned long AccessGranted;// Offset=0x88 Size=0x4
    void * SecurityDescriptor;// Offset=0x90 Size=0x8
};
