struct threadmbcinfostruct// Size=0x220 (Id=165)
{
    int refcount;// Offset=0x0 Size=0x4
    int mbcodepage;// Offset=0x4 Size=0x4
    int ismbcodepage;// Offset=0x8 Size=0x4
    int mblcid;// Offset=0xc Size=0x4
    unsigned short mbulinfo[6];// Offset=0x10 Size=0xc
    unsigned char mbctype[257];// Offset=0x1c Size=0x101
    unsigned char mbcasemap[256];// Offset=0x11d Size=0x100
};
