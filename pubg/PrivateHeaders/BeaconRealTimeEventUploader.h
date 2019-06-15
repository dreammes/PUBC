//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaUplaodNotifier.h"
#import "BeaconAnaUploader.h"

@class NSString;

@interface BeaconRealTimeEventUploader : NSObject <AnaUplaodNotifier, BeaconAnaUploader>
{
}

+ (id)sharedInstance;	// IMP=0x00000001007bd3fc
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007bdadc
- (void)canceled:(id)arg1;	// IMP=0x00000001007bd8cc
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;	// IMP=0x00000001007bd714
- (_Bool)uploadFinishWithResult:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000001007bd70c
- (void)reachMaxsize;	// IMP=0x00000001007bd494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

