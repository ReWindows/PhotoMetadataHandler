#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 5 member(s).
class CStringRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnRead@CStringRuleReader@@UEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnRead@CStringRuleReader@@UEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAndConvertQuery@CStringRuleReader@@UEAAJPEBGW4DiskFormats@@W4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ReadAndConvertQuery(unsigned short const *, int, int, tagPROPVARIANT *);
};
