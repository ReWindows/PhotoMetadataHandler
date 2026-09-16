#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CMergeStringRuleWriter {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPathAllowed@CMergeStringRuleWriter@@MEAAJPEBURULE_PATH_INFO@@PEBUtagPROPVARIANT@@PEAW4Enum@PathAllowedType@@@Z
    virtual long CheckPathAllowed(RULE_PATH_INFO const *, tagPROPVARIANT const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnWrite@CMergeStringRuleWriter@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnWrite(int, tagPROPVARIANT *);
};
