enum _WWAN_STRUCT_TYPE
{
    WwanStructTN=0,
    WwanStructContext=1,
    WwanStructProvider=2,
    WwanStructSmsPdu=3,
    WwanStructReserved0=4,
    WwanStructReserved1=5,
    WwanStructReserved2=6,
    WwanStructSmsCdma=7,
    WwanStructReserved3=8,
    WwanStructDeviceServiceEntry=9,
    WwanStructProvider2=10,
    WwanStructDeviceServiceGuid=11,
    WwanStructDeviceServiceCommandId=12,
    WwanStructCellularClass=13,
    WwanStructDeviceSlotMap=14,
    WwanStructUiccApplication=15,
    WwanStructRegisterAcquisitionOrder=16,
    WwanStructRegistrationState=17,
    WwanStructSignalState=18,
    WwanStructMax=19
};

struct _WWAN_LIST_HEADER// Size=0x8 (Id=664)
{
    enum _WWAN_STRUCT_TYPE ElementType;// Offset=0x0 Size=0x4
    unsigned long ElementCount;// Offset=0x4 Size=0x4
};
