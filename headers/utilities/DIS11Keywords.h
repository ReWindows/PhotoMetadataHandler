#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 19 member(s).
namespace DIS11 {
class DIS11Keywords {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?characters@DIS11Keywords@DIS11@@UEAAJPEBGH@Z
    virtual long characters(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?endDocument@DIS11Keywords@DIS11@@UEAAJXZ
    virtual long endDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?endElement@DIS11Keywords@DIS11@@UEAAJPEBGH0H0H@Z
    virtual long endElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?endPrefixMapping@DIS11Keywords@DIS11@@UEAAJPEBGH@Z
    virtual long endPrefixMapping(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ignorableWhitespace@DIS11Keywords@DIS11@@UEAAJPEBGH@Z
    virtual long ignorableWhitespace(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?processingInstruction@DIS11Keywords@DIS11@@UEAAJPEBGH0H@Z
    virtual long processingInstruction(unsigned short const *, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?putDocumentLocator@DIS11Keywords@DIS11@@UEAAJPEAUISAXLocator@@@Z
    virtual long putDocumentLocator(ISAXLocator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?skippedEntity@DIS11Keywords@DIS11@@UEAAJPEBGH@Z
    virtual long skippedEntity(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startDocument@DIS11Keywords@DIS11@@UEAAJXZ
    virtual long startDocument();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startElement@DIS11Keywords@DIS11@@UEAAJPEBGH0H0HPEAUISAXAttributes@@@Z
    virtual long startElement(unsigned short const *, int, unsigned short const *, int, unsigned short const *, int, ISAXAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startPrefixMapping@DIS11Keywords@DIS11@@UEAAJPEBGH0H@Z
    virtual long startPrefixMapping(unsigned short const *, int, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DIS11Keywords@DIS11@@UEAA@XZ
    virtual ~DIS11Keywords();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKeyword@DIS11Keywords@DIS11@@AEAAXXZ
    void AddKeyword();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixXML@DIS11Keywords@DIS11@@AEAAXAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAV34@@Z
    void FixXML(WindissectOpaque const &, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttrib@DIS11Keywords@DIS11@@AEAAJPEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEBGPEAUISAXAttributes@@@Z
    long GetAttrib(WindissectOpaque *, unsigned short const *, ISAXAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@DIS11Keywords@DIS11@@AEAAJPEBG@Z
    long Parse(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateRootNodeTitle@DIS11Keywords@DIS11@@AEAA_NPEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z
    bool TranslateRootNodeTitle(WindissectOpaque *);
};
} // namespace DIS11
