struct NVM_SET_LIST// Size=0x100 (Id=1255)
{
    unsigned char IdentifierCount;// Offset=0x0 Size=0x1
    unsigned char Reserved[127];// Offset=0x1 Size=0x7f
    struct NVME_SET_ATTRIBUTES_ENTRY Entry[1];// Offset=0x80 Size=0x80
};
