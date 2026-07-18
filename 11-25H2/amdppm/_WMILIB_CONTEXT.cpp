struct _WMILIB_CONTEXT// Size=0x40 (Id=710)
{
    unsigned long GuidCount;// Offset=0x0 Size=0x4
    struct _WMIGUIDREGINFO * GuidList;// Offset=0x8 Size=0x8
    long  ( * QueryWmiRegInfo)(struct _DEVICE_OBJECT * ,unsigned long * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING ** ,struct _UNICODE_STRING * ,struct _DEVICE_OBJECT ** );// Offset=0x10 Size=0x8
    long  ( * QueryWmiDataBlock)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long * ,unsigned long ,unsigned char * );// Offset=0x18 Size=0x8
    long  ( * SetWmiDataBlock)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x20 Size=0x8
    long  ( * SetWmiDataItem)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x28 Size=0x8
    long  ( * ExecuteWmiMethod)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned char * );// Offset=0x30 Size=0x8
    long  ( * WmiFunctionControl)(struct _DEVICE_OBJECT * ,struct _IRP * ,unsigned long ,enum _WMIENABLEDISABLECONTROL ,unsigned char );// Offset=0x38 Size=0x8
};
