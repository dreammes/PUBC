//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDCheckinStore, FIRInstanceIDTokenStore, NSObject<FIRInstanceIDStoreDelegate>;

@interface FIRInstanceIDStore : NSObject
{
    NSObject<FIRInstanceIDStoreDelegate> *_delegate;	// 8 = 0x8
    FIRInstanceIDCheckinStore *_checkinStore;	// 16 = 0x10
    FIRInstanceIDTokenStore *_tokenStore;	// 24 = 0x18
}

+ (_Bool)removeApplicationSupportSubDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x000000010091ddcc
+ (_Bool)createApplicationSupportSubDirectory:(id)arg1;	// IMP=0x000000010091dc48
+ (id)pathForApplicationSupportSubDirectory:(id)arg1;	// IMP=0x000000010091db34
+ (_Bool)hasApplicationSupportSubDirectory:(id)arg1;	// IMP=0x000000010091da98
@property(retain, nonatomic) FIRInstanceIDTokenStore *tokenStore; // @synthesize tokenStore=_tokenStore;
@property(retain, nonatomic) FIRInstanceIDCheckinStore *checkinStore; // @synthesize checkinStore=_checkinStore;
@property(readonly, nonatomic) __weak NSObject<FIRInstanceIDStoreDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010091e760
- (_Bool)removeCheckinPreferences:(id *)arg1;	// IMP=0x000000010091e6a4
- (id)cachedCheckinPreferences;	// IMP=0x000000010091e650
- (_Bool)saveCheckinPreferences:(id)arg1 error:(id *)arg2;	// IMP=0x000000010091e5d0
- (_Bool)removeAllCachedTokensWithError:(id *)arg1;	// IMP=0x000000010091e57c
- (void)removeCachedTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2;	// IMP=0x000000010091e484
- (_Bool)saveTokenInfo:(id)arg1;	// IMP=0x000000010091e40c
- (id)cachedTokenInfos;	// IMP=0x000000010091e3b8
- (id)tokenInfoWithAuthorizedEntity:(id)arg1 scope:(id)arg2;	// IMP=0x000000010091e2f0
- (_Bool)hasSavedLibraryVersion;	// IMP=0x000000010091e284
- (id)currentSavedLibraryVersion;	// IMP=0x000000010091e220
- (void)saveLibraryVersion;	// IMP=0x000000010091e170
- (void)resetCredentialsIfNeeded;	// IMP=0x000000010091def4
- (id)initWithCheckinStore:(id)arg1 tokenStore:(id)arg2 delegate:(id)arg3;	// IMP=0x000000010091d994
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010091d8c8

@end

