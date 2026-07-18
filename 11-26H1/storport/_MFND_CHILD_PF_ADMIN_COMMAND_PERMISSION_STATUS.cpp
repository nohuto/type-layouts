struct _MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY// Size=0x10 (Id=675)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned char CommandOpcode;// Offset=0x8 Size=0x1
    unsigned char Reserved[7];// Offset=0x9 Size=0x7
};

struct _MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_STATUS// Size=0x1c (Id=674)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long CommandCount;// Offset=0x8 Size=0x4
    struct _MFND_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY CommandPermissionEntries[1];// Offset=0xc Size=0x10
};
