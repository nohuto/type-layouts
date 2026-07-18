enum _STORPORT_NVMEOF_FUNCTION_CODE
{
    ExtNvmeofFunctionGetHostNqn=0,
    ExtNvmeofFunctionGetHostId=1,
    ExtNvmeofFunctionAddNvmeofHostGateway=2,
    ExtNvmeofFunctionRemoveNvmeofHostGateway=3,
    ExtNvmeofFunctionAddNvmeofSubsystemPort=4,
    ExtNvmeofFunctionRemoveNvmeofSubsystemPort=5,
    ExtNvmeofFunctionAddNvmeofController=6,
    ExtNvmeofFunctionGetNvmeofRequest=7,
    ExtNvmeofFunctionPauseNvmeofHostGateway=8,
    ExtNvmeofFunctionResumeNvmeofHostGateway=9,
    ExtNvmeofFunctionPauseNvmeofController=10,
    ExtNvmeofFunctionResumeNvmeofController=11
};
