struct _SID_IDENTIFIER_AUTHORITY// Size=0x6 (Id=4047)
{
    unsigned char Value[6];// Offset=0x0 Size=0x6
};

struct _SID// Size=0xc (Id=4051)
{
    unsigned char Revision;// Offset=0x0 Size=0x1
    unsigned char SubAuthorityCount;// Offset=0x1 Size=0x1
    struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;// Offset=0x2 Size=0x6
    unsigned long SubAuthority[1];// Offset=0x8 Size=0x4
};
