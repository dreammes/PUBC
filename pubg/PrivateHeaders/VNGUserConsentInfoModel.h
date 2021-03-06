//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "VNGPersistable.h"

@class NSString;

@interface VNGUserConsentInfoModel : NSObject <NSCoding, VNGPersistable>
{
    _Bool _consentRequired;	// 8 = 0x8
    NSString *_consentStatus;	// 16 = 0x10
    NSString *_consentSource;	// 24 = 0x18
    long long _consentTimeStamp;	// 32 = 0x20
}

@property(nonatomic) _Bool consentRequired; // @synthesize consentRequired=_consentRequired;
@property(nonatomic) long long consentTimeStamp; // @synthesize consentTimeStamp=_consentTimeStamp;
@property(readonly, copy, nonatomic) NSString *consentSource; // @synthesize consentSource=_consentSource;
@property(readonly, copy, nonatomic) NSString *consentStatus; // @synthesize consentStatus=_consentStatus;
- (void).cxx_destruct;	// IMP=0x0000000100afd004
- (long long)persistenceChannel;	// IMP=0x0000000100afcf9c
- (id)persistenceCategory;	// IMP=0x0000000100afcf70
- (id)persistenceKey;	// IMP=0x0000000100afcf44
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100afce20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100afcd04
- (id)initWithConsentStatus:(id)arg1 consentSource:(id)arg2 consentTimeStamp:(id)arg3 consentRequired:(_Bool)arg4;	// IMP=0x0000000100afcbf4
- (id)init;	// IMP=0x0000000100afcbd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

