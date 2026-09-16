#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 5 member(s).
class CStringRuleWriter {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAndWriteQuery@CStringRuleWriter@@MEAAJPEBGW4DiskFormats@@W4DataFormats@@PEBUtagPROPVARIANT@@@Z
    virtual long ConvertAndWriteQuery(unsigned short const *, int, int, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnWrite@CStringRuleWriter@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnWrite(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnWrite@CStringRuleWriter@@MEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnWrite(int, tagPROPVARIANT *);
};
