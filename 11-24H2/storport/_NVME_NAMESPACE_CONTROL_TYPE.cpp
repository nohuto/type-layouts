enum _NVME_NAMESPACE_CONTROL_TYPE
{
    NvmeQuerySupportedNamespaceControlTypes=0,
    NvmeNamespaceStart=1,
    NvmeNamespacePower=2,
    NvmeNamespacePoFxPowerInfo=3,
    NvmeNamespacePoFxPowerRequired=4,
    NvmeNamespacePoFxPowerActive=5,
    NvmeNamespacePoFxPowerSetFState=6,
    NvmeNamespacePoFxPowerControl=7,
    NvmeNamespaceRemove=8,
    NvmeNamespaceSurpriseRemoval=9,
    NvmeNamespaceControlMax=10,
    MakeNamespaceControlTypeSizeOfUlong=-1
};
