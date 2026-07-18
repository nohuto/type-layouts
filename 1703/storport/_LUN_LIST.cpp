struct _LUN_LIST// Size=0x8 (Id=288)
{
    unsigned char LunListLength[4];// Offset=0x0 Size=0x4
    unsigned char Reserved[4];// Offset=0x4 Size=0x4
    unsigned char Lun[0][8];
};
