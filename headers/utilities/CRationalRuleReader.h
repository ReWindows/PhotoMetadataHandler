#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CRationalRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnRead@CRationalRuleReader@@UEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRulePath@CRationalRuleReader@@UEAAJPEBURULE_PATH_INFO@@PEAPEAVCReadResult@@@Z
    virtual long ReadRulePath(RULE_PATH_INFO const *, CReadResult * *);
};
