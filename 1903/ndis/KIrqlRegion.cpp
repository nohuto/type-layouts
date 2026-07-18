struct KIrqlRegion// Size=0x1 (Id=244)
{
    void KIrqlRegion();
    void ~KIrqlRegion();
    void Enter();
    void Leave();
    unsigned char m_OldIrql;// Offset=0x0 Size=0x1
    void * __vecDelDtor(unsigned int );
};
