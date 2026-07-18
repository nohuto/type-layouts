struct _CM_INT13_DRIVE_PARAMETER// Size=0xc (Id=4161)
{
    unsigned short DriveSelect;// Offset=0x0 Size=0x2
    unsigned long MaxCylinders;// Offset=0x2 Size=0x4
    unsigned short SectorsPerTrack;// Offset=0x6 Size=0x2
    unsigned short MaxHeads;// Offset=0x8 Size=0x2
    unsigned short NumberDrives;// Offset=0xa Size=0x2
};
