#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 4 member(s).
class CIntegerRuleWriter {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertAndWriteQuery@CIntegerRuleWriter@@MEAAJPEBGW4DiskFormats@@W4DataFormats@@PEBUtagPROPVARIANT@@@Z
    virtual long ConvertAndWriteQuery(unsigned short const *, int, int, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnWrite@CIntegerRuleWriter@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnWrite(int, tagPROPVARIANT *);
};
