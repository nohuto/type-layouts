struct _WDF_CHILD_LIST_CONFIG_V1_13// Size=0x60 (Id=2716)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long IdentificationDescriptionSize;// Offset=0x4 Size=0x4
    unsigned long AddressDescriptionSize;// Offset=0x8 Size=0x4
    long  ( * EvtChildListCreateDevice)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct WDFDEVICE_INIT * );// Offset=0x10 Size=0x8
    void  ( * EvtChildListScanForChildren)(struct WDFCHILDLIST__ * );// Offset=0x18 Size=0x8
    void  ( * EvtChildListIdentificationDescriptionCopy)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x20 Size=0x8
    long  ( * EvtChildListIdentificationDescriptionDuplicate)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x28 Size=0x8
    void  ( * EvtChildListIdentificationDescriptionCleanup)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x30 Size=0x8
    unsigned char  ( * EvtChildListIdentificationDescriptionCompare)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x38 Size=0x8
    void  ( * EvtChildListAddressDescriptionCopy)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x40 Size=0x8
    long  ( * EvtChildListAddressDescriptionDuplicate)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x48 Size=0x8
    void  ( * EvtChildListAddressDescriptionCleanup)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x50 Size=0x8
    unsigned char  ( * EvtChildListDeviceReenumerated)(struct WDFCHILDLIST__ * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x58 Size=0x8
};
