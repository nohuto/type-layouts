struct WMIREGINFOW// Size=0x18 (Id=2618)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    unsigned long NextWmiRegInfo;// Offset=0x4 Size=0x4
    unsigned long RegistryPath;// Offset=0x8 Size=0x4
    unsigned long MofResourceName;// Offset=0xc Size=0x4
    unsigned long GuidCount;// Offset=0x10 Size=0x4
    struct WMIREGGUIDW WmiRegGuid[0];
};
