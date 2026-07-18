enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS
{
    WdfChildListRetrieveDeviceUndefined=0,
    WdfChildListRetrieveDeviceSuccess=1,
    WdfChildListRetrieveDeviceNotYetCreated=2,
    WdfChildListRetrieveDeviceNoSuchDevice=3
};

struct _WDF_CHILD_RETRIEVE_INFO_V1_1// Size=0x28 (Id=4042)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER_V1_1 * IdentificationDescription;// Offset=0x8 Size=0x8
    struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER_V1_1 * AddressDescription;// Offset=0x10 Size=0x8
    enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS Status;// Offset=0x18 Size=0x4
    unsigned char  ( * EvtChildListIdentificationDescriptionCompare)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x20 Size=0x8
};
