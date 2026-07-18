struct wil::details::kspin_lock_saved_irql// Size=0x10 (Id=310)
{
    unsigned long long * spinLock;// Offset=0x0 Size=0x8
    unsigned char savedIrql;// Offset=0x8 Size=0x1
    void kspin_lock_saved_irql(unsigned long long * );
    void kspin_lock_saved_irql();
    unsigned long long * operator unsigned __int64 *();
    void Release(struct wil::details::kspin_lock_saved_irql & );
};
