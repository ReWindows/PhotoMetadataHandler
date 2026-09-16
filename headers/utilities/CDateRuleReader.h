#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CDateRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnRead@CDateRuleReader@@UEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRulePath@CDateRuleReader@@UEAAJPEBURULE_PATH_INFO@@PEAPEAVCReadResult@@@Z
    virtual long ReadRulePath(RULE_PATH_INFO const *, CReadResult * *);
};
