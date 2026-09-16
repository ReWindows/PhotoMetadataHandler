#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 5 member(s).
class CRationalRuleWriter {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnWrite@CRationalRuleWriter@@MEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnWrite(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRulePath@CRationalRuleWriter@@MEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@@Z
    virtual long WriteRulePath(RULE_PATH_INFO const *, tagPROPVARIANT const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRationalFromPart@CRationalRuleWriter@@AEAAJPEAUtagPROPVARIANT@@HH@Z
    long CreateRationalFromPart(tagPROPVARIANT *, int, int);
};
