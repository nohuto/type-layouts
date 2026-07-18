struct _anonymous_158// Size=0x20 (Id=158)
{
    char * locale;// Offset=0x0 Size=0x8
    wchar_t * wlocale;// Offset=0x8 Size=0x8
    int * refcount;// Offset=0x10 Size=0x8
    int * wrefcount;// Offset=0x18 Size=0x8
};

struct threadlocaleinfostruct// Size=0x160 (Id=201)
{
    union // Size=0x48 (Id=0)
    {
        int refcount;// Offset=0x0 Size=0x4
        unsigned int lc_codepage;// Offset=0x4 Size=0x4
        unsigned int lc_collate_cp;// Offset=0x8 Size=0x4
        unsigned long lc_handle[6];// Offset=0xc Size=0x18
        struct tagLC_ID lc_id[6];// Offset=0x24 Size=0x24
        struct <unnamed-type-lc_category>// Size=0x20 (Id=69116)
        {
            char * locale;// Offset=0x0 Size=0x8
            wchar_t * wlocale;// Offset=0x8 Size=0x8
            int * refcount;// Offset=0x10 Size=0x8
            int * wrefcount;// Offset=0x18 Size=0x8
        };
        struct threadlocaleinfostruct::<unnamed-type-lc_category> lc_category[6];// Offset=0x48 Size=0xc0
    };
    int lc_clike;// Offset=0x108 Size=0x4
    int mb_cur_max;// Offset=0x10c Size=0x4
    int * lconv_intl_refcount;// Offset=0x110 Size=0x8
    int * lconv_num_refcount;// Offset=0x118 Size=0x8
    int * lconv_mon_refcount;// Offset=0x120 Size=0x8
    struct lconv * lconv;// Offset=0x128 Size=0x8
    int * ctype1_refcount;// Offset=0x130 Size=0x8
    wchar_t * ctype1;// Offset=0x138 Size=0x8
    unsigned short * pctype;// Offset=0x140 Size=0x8
    unsigned char * pclmap;// Offset=0x148 Size=0x8
    unsigned char * pcumap;// Offset=0x150 Size=0x8
    struct __lc_time_data * lc_time_curr;// Offset=0x158 Size=0x8
};
