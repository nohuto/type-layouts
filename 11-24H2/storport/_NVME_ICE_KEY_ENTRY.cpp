struct _NVME_ICE_KEY_ENTRY// Size=0x48 (Id=1092)
{
    unsigned long KeyTableIndex;// Offset=0x0 Size=0x4
    unsigned char KeyHash[32];// Offset=0x4 Size=0x20
    long NumOutstandingIOs;// Offset=0x24 Size=0x4
    unsigned long KeyDataSize;// Offset=0x28 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct NVME_ICE_PROGRAM_KEY_DATA * KeyData;// Offset=0x30 Size=0x8
        struct NVME_ICE_PROGRAM_KEY_DATA_V2 * KeyDataV2;// Offset=0x30 Size=0x8
    };
    void * KeyHandle;// Offset=0x38 Size=0x8
    unsigned long KeyIndex;// Offset=0x40 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char IsValid:1;// Offset=0x44 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x44 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
};
