enum _DIRECTORY_NOTIFY_INFORMATION_CLASS
{
    DirectoryNotifyInformation=1,
    DirectoryNotifyExtendedInformation=2
};

struct _anonymous_123// Size=0xc (Id=123)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long CompletionFilter;// Offset=0x4 Size=0x4
    enum _DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass;// Offset=0x8 Size=0x4
};
