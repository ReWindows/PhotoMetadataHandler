#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 7 member(s).
class CMergeStringRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadKey@CMergeStringRuleReader@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long ReadKey(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingChecksumWouldAffectReadPath@CMergeStringRuleReader@@UEAAJPEBGPEAH@Z
    virtual long SettingChecksumWouldAffectReadPath(unsigned short const *, int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnRead@CMergeStringRuleReader@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRulePath@CMergeStringRuleReader@@MEAAJPEBURULE_PATH_INFO@@PEAPEAVCReadResult@@@Z
    virtual long ReadRulePath(RULE_PATH_INFO const *, CReadResult * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeKeywords@CMergeStringRuleReader@@CAJAEBUtagPROPVARIANT@@0PEAU2@PEAV?$CAtlArray@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@@Z
    static long MergeKeywords(tagPROPVARIANT const &, tagPROPVARIANT const &, tagPROPVARIANT *, WindissectOpaque *);
};
