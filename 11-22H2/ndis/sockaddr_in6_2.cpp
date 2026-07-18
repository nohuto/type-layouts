struct sockaddr_in6// Size=0x1c (Id=158)
{
    unsigned short sin6_family;// Offset=0x0 Size=0x2
    unsigned short sin6_port;// Offset=0x2 Size=0x2
    unsigned long sin6_flowinfo;// Offset=0x4 Size=0x4
    struct in6_addr sin6_addr;// Offset=0x8 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long sin6_scope_id;// Offset=0x18 Size=0x4
        struct SCOPE_ID sin6_scope_struct;// Offset=0x18 Size=0x4
    };
};
