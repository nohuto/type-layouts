enum _PNP_VETO_TYPE
{
    PNP_VetoTypeUnknown=0,
    PNP_VetoLegacyDevice=1,
    PNP_VetoPendingClose=2,
    PNP_VetoWindowsApp=3,
    PNP_VetoWindowsService=4,
    PNP_VetoOutstandingOpen=5,
    PNP_VetoDevice=6,
    PNP_VetoDriver=7,
    PNP_VetoIllegalDeviceRequest=8,
    PNP_VetoInsufficientPower=9,
    PNP_VetoNonDisableable=10,
    PNP_VetoLegacyDriver=11,
    PNP_VetoInsufficientRights=12,
    PNP_VetoAlreadyRemoved=13
};

struct _anonymous_1788// Size=0x8 (Id=1788)
{
    enum _PNP_VETO_TYPE VetoType;// Offset=0x0 Size=0x4
    wchar_t DeviceIdVetoNameBuffer[1];// Offset=0x4 Size=0x2
};
