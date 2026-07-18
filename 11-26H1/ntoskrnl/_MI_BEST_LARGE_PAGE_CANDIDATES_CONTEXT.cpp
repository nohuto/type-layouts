struct _MI_BEST_LARGE_PAGE_CANDIDATES_CONTEXT// Size=0x58 (Id=671)
{
    unsigned long BestCandidateCountMax;// Offset=0x0 Size=0x4
    unsigned long BestCandidateCount;// Offset=0x4 Size=0x4
    unsigned long BestCandidatesTried;// Offset=0x8 Size=0x4
    unsigned long CandidateUsed;// Offset=0xc Size=0x4
    unsigned long long NextLargePage;// Offset=0x10 Size=0x8
    unsigned long long BestCandidatesBasePage[8];// Offset=0x18 Size=0x40
};
