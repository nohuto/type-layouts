struct _NVME_AUTHKEY_ENTRY// Size=0x314 (Id=1094)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Identifier;// Offset=0x4 Size=0x4
    unsigned short TransformFunction;// Offset=0x8 Size=0x2
    unsigned short KeyLength;// Offset=0xa Size=0x2
    unsigned char IsEntitySubsystem;// Offset=0xc Size=0x1
    unsigned char Reserved;// Offset=0xd Size=0x1
    unsigned short TransformedKeyLength;// Offset=0xe Size=0x2
    unsigned long RefCount;// Offset=0x10 Size=0x4
    unsigned char Nqn[256];// Offset=0x14 Size=0x100
    unsigned char Key[256];// Offset=0x114 Size=0x100
    unsigned char TransformedKey[256];// Offset=0x214 Size=0x100
};
