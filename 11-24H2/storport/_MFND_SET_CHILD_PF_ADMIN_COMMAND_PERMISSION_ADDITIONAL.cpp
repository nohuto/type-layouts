struct _MFND_SET_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY// Size=0x10 (Id=685)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved0[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned char CommandOpcode;// Offset=0xc Size=0x1
    unsigned char Reserved1[3];// Offset=0xd Size=0x3
};

struct _MFND_SET_CHILD_PF_ADMIN_COMMAND_PERMISSION_ADDITIONAL// Size=0x20 (Id=684)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long CommandCount;// Offset=0xc Size=0x4
    struct _MFND_SET_CHILD_PF_ADMIN_COMMAND_PERMISSION_ENTRY CommandPermissionEntries[1];// Offset=0x10 Size=0x10
};
