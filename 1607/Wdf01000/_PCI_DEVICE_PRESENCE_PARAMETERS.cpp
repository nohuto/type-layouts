struct _PCI_DEVICE_PRESENCE_PARAMETERS// Size=0x18 (Id=2918)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned short VendorID;// Offset=0x8 Size=0x2
    unsigned short DeviceID;// Offset=0xa Size=0x2
    unsigned char RevisionID;// Offset=0xc Size=0x1
    unsigned short SubVendorID;// Offset=0xe Size=0x2
    unsigned short SubSystemID;// Offset=0x10 Size=0x2
    unsigned char BaseClass;// Offset=0x12 Size=0x1
    unsigned char SubClass;// Offset=0x13 Size=0x1
    unsigned char ProgIf;// Offset=0x14 Size=0x1
};
