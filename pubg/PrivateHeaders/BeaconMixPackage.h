//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaLocalObjInitWithWupProtocol.h"
#import "AnaNSObjTransToJceBufferProtocol.h"

@class NSMutableDictionary, NSString;

@interface BeaconMixPackage : NSObject <AnaNSObjTransToJceBufferProtocol, AnaLocalObjInitWithWupProtocol>
{
    NSMutableDictionary *mixMap;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableDictionary *mixMap; // @synthesize mixMap;
- (void).cxx_destruct;	// IMP=0x00000001007d1570
- (void)dealloc;	// IMP=0x00000001007d14d0
- (void)addUploadElements:(id)arg1;	// IMP=0x00000001007d1228
- (id)getUploadElements;	// IMP=0x00000001007d1054
- (id)createWUPModle;	// IMP=0x00000001007d0d78
- (void)initWithWUPModel:(id)arg1;	// IMP=0x00000001007d0904
- (void)initLocalObjWithWupBuffer:(id)arg1;	// IMP=0x00000001007d0898
- (id)getDataToBuffer;	// IMP=0x00000001007d088c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
