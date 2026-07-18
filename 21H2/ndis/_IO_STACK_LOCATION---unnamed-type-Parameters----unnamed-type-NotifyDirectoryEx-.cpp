enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
    DirectoryNotifyInformation=1,
    DirectoryNotifyExtendedInformation=2
};

struct _IO_STACK_LOCATION::<unnamed-type-Parameters>::<unnamed-type-NotifyDirectoryEx>// Size=0x18 (Id=1800)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x8 Size=0x4
    enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;// Offset=0x10 Size=0x4
};
