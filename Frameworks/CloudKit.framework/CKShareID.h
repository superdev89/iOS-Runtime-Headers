/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKShareID : NSObject <NSSecureCoding, NSCopying> {
    NSString *_ownerName;
    NSString *_shareName;
}

@property(retain) NSString * ownerName;
@property(retain) NSString * shareName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareName:(id)arg1 ownerName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)ownerName;
- (void)setOwnerName:(id)arg1;
- (void)setShareName:(id)arg1;
- (id)shareName;

@end