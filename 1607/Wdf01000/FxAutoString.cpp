struct _UNICODE_STRING// Size=0x10 (Id=462)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct FxAutoString// Size=0x10 (Id=1036)
{
    void FxAutoString();
    union // Size=0x28 (Id=0)
    {
        void ~FxAutoString();// Offset=0x0 Size=0x28
        struct _UNICODE_STRING m_UnicodeString;// Offset=0x0 Size=0x10
        void * __vecDelDtor(unsigned int );
    };
};
