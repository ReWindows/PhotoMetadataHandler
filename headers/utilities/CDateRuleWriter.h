#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CDateRuleWriter {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnWrite@CDateRuleWriter@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnWrite(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRulePath@CDateRuleWriter@@MEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@@Z
    virtual long WriteRulePath(RULE_PATH_INFO const *, tagPROPVARIANT const *);
};
