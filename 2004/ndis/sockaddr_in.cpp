struct sockaddr_in// Size=0x10 (Id=164)
{
    unsigned short sin_family;// Offset=0x0 Size=0x2
    unsigned short sin_port;// Offset=0x2 Size=0x2
    struct in_addr sin_addr;// Offset=0x4 Size=0x4
    char sin_zero[8];// Offset=0x8 Size=0x8
};
