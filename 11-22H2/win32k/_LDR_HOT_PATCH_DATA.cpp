struct _LDR_HOT_PATCH_DATA// Size=0x18 (Id=24)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    long  ( * PatchLoadLibrary)(wchar_t * ,unsigned long * ,struct _UNICODE_STRING * ,void ** );// Offset=0x8 Size=0x8
    long  ( * PatchGetProcAddress)(void * ,struct _STRING * ,unsigned long ,void ** );// Offset=0x10 Size=0x8
};
