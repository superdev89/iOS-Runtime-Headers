/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSData *_clientChangeTokenData;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSArray *_recordsToSave;
    long long _savePolicy;
    bool_atomic;
    bool_shouldOnlySaveAssetContent;
}

@property bool atomic;
@property(retain) NSData * clientChangeTokenData;
@property(retain) NSDictionary * conflictLosersToResolveByRecordID;
@property(retain) NSArray * recordIDsToDelete;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSArray * recordsToSave;
@property long long savePolicy;
@property bool shouldOnlySaveAssetContent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)atomic;
- (id)clientChangeTokenData;
- (id)conflictLosersToResolveByRecordID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordIDsToDelete;
- (id)recordIDsToDeleteToEtags;
- (id)recordsToSave;
- (long long)savePolicy;
- (void)setAtomic:(bool)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setConflictLosersToResolveByRecordID:(id)arg1;
- (void)setRecordIDsToDelete:(id)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (void)setRecordsToSave:(id)arg1;
- (void)setSavePolicy:(long long)arg1;
- (void)setShouldOnlySaveAssetContent:(bool)arg1;
- (bool)shouldOnlySaveAssetContent;

@end