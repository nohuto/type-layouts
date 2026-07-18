enum _WDF_FILEOBJECT_CLASS
{
    WdfFileObjectInvalid=0,
    WdfFileObjectNotRequired=1,
    WdfFileObjectWdfCanUseFsContext=2,
    WdfFileObjectWdfCanUseFsContext2=3,
    WdfFileObjectWdfCannotUseFsContexts=4,
    WdfFileObjectCanBeOptional=-2147483648
};
