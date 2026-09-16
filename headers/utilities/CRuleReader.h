#pragma once
#include "../windissect_forwards.h"

// Reconstructed from PhotoMetadataHandler.dll by Windissect. 9 member(s).
class CRuleReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPathAllowed@CRuleReader@@UEAAJPEBURULE_PATH_INFO@@PEAH@Z
    virtual long CheckPathAllowed(RULE_PATH_INFO const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRuleReader@@UEAAJPEBUKEY_LIST_ENTRY@@PEBUCAPABILITIES_LIST_ENTRY@@PEAUIWICMetadataQueryReader@@PEBURULE_PATH_INFO@@I@Z
    virtual long Initialize(KEY_LIST_ENTRY const *, CAPABILITIES_LIST_ENTRY const *, IWICMetadataQueryReader *, RULE_PATH_INFO const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadKey@CRuleReader@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long ReadKey(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingChecksumWouldAffectReadPath@CRuleReader@@UEAAJPEBGPEAH@Z
    virtual long SettingChecksumWouldAffectReadPath(unsigned short const *, int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDataFormatOnRead@CRuleReader@@MEAAJW4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDataFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertDiskFormatOnRead@CRuleReader@@MEAAJW4DiskFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ConvertDiskFormatOnRead(int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRulePath@CRuleReader@@MEAAJPEBURULE_PATH_INFO@@PEAPEAVCReadResult@@@Z
    virtual long ProcessRulePath(RULE_PATH_INFO const *, CReadResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAndConvertQuery@CRuleReader@@MEAAJPEBGW4DiskFormats@@W4DataFormats@@PEAUtagPROPVARIANT@@@Z
    virtual long ReadAndConvertQuery(unsigned short const *, int, int, tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRulePath@CRuleReader@@MEAAJPEBURULE_PATH_INFO@@PEAPEAVCReadResult@@@Z
    virtual long ReadRulePath(RULE_PATH_INFO const *, CReadResult * *);
};
