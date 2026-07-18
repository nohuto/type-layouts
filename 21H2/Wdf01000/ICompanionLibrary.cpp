struct ICompanionLibrary// Size=0x8 (Id=1189)
{
    long LoadCompanion(struct _DEVICE_OBJECT * ,wchar_t * ,struct IDeviceCompanionCallbacks * ,struct IDeviceCompanion ** );
    long UnloadCompanion(struct IDeviceCompanion * );
};
