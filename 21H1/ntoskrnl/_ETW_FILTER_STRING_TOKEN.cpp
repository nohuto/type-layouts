struct _ETW_FILTER_STRING_TOKEN_ELEMENT// Size=0x10 (Id=1603)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t * String;// Offset=0x8 Size=0x8
};

struct _ETW_FILTER_STRING_TOKEN// Size=0x18 (Id=1362)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    struct _ETW_FILTER_STRING_TOKEN_ELEMENT Tokens[1];// Offset=0x8 Size=0x10
};
