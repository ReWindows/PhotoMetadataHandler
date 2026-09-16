#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 14 member(s).
class CRuleWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPathAllowed@CRuleWriter@@UEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@PEAW4Enum@PathAllowedType@@@Z
    virtual long CheckPathAllowed(RULE_PATH_INFO const *, tagPROPVARIANT const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRuleWriter@@UEAAJPEBUKEY_LIST_ENTRY@@PEBUCAPABILITIES_LIST_ENTRY@@PEAUIWICMetadataQueryWriter@@PEBURULE_PATH_INFO@@IPEAVCPolicyComponent@@PEAV?$CSimpleArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CSimpleArrayEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@@Z
    virtual long Initialize(KEY_LIST_ENTRY const *, CAPABILITIES_LIST_ENTRY const *, IWICMetadataQueryWriter *, RULE_PATH_INFO const *, unsigned int, CPolicyComponent *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveKey@CRuleWriter@@UEAAJXZ
    virtual long RemoveKey();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteKey@CRuleWriter@@UEAAJPEBUtagPROPVARIANT@@@Z
    virtual long WriteKey(tagPROPVARIANT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRuleWriter@@UEAA@XZ
    virtual ~CRuleWriter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAndWriteQuery@CRuleWriter@@MEAAJPEBGW4DiskFormats@@W4DataFormats@@PEBUtagPROPVARIANT@@@Z
    virtual long ConvertAndWriteQuery(unsigned short const *, int, int, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnWrite@CRuleWriter@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnWrite(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnWrite@CRuleWriter@@MEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnWrite(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedToProcessChecksumForPath@CRuleWriter@@IEAAHPEBURULE_PATH_INFO@@@Z
    int NeedToProcessChecksumForPath(RULE_PATH_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRulePath@CRuleWriter@@MEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@@Z
    virtual long ProcessRulePath(RULE_PATH_INFO const *, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePathAndHandleChecksum@CRuleWriter@@IEAAJPEBURULE_PATH_INFO@@@Z
    long RemovePathAndHandleChecksum(RULE_PATH_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChecksum@CRuleWriter@@IEAAJPEBURULE_PATH_INFO@@@Z
    long UpdateChecksum(RULE_PATH_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteOtherKeysAffectedByChecksum@CRuleWriter@@IEAAJPEBURULE_PATH_INFO@@@Z
    long WriteOtherKeysAffectedByChecksum(RULE_PATH_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRulePath@CRuleWriter@@MEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@@Z
    virtual long WriteRulePath(RULE_PATH_INFO const *, tagPROPVARIANT const *);
};
