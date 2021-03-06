//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BeaconRequestPackage : NSObject
{
    BOOL platformId;	// 8 = 0x8
    BOOL encryType;	// 9 = 0x9
    BOOL zipType;	// 10 = 0xa
    int cmd;	// 12 = 0xc
    int _eventCnt;	// 16 = 0x10
    NSString *appkey;	// 24 = 0x18
    NSString *appVersion;	// 32 = 0x20
    NSString *sdkId;	// 40 = 0x28
    NSString *sdkVersion;	// 48 = 0x30
    id <AnaNSObjTransToJceBufferProtocol> sBuffer;	// 56 = 0x38
    NSString *osVer;	// 64 = 0x40
    NSString *model;	// 72 = 0x48
    NSString *reserved;	// 80 = 0x50
}

+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;	// IMP=0x00000001007d1584
@property(nonatomic) int eventCnt; // @synthesize eventCnt=_eventCnt;
@property(retain, nonatomic) NSString *reserved; // @synthesize reserved;
@property(retain, nonatomic) NSString *model; // @synthesize model;
@property(retain, nonatomic) NSString *osVer; // @synthesize osVer;
@property(retain, nonatomic) id <AnaNSObjTransToJceBufferProtocol> sBuffer; // @synthesize sBuffer;
@property(nonatomic) int cmd; // @synthesize cmd;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion;
@property(retain, nonatomic) NSString *sdkId; // @synthesize sdkId;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey;
@property(nonatomic) BOOL zipType; // @synthesize zipType;
@property(nonatomic) BOOL encryType; // @synthesize encryType;
@property(nonatomic) BOOL platformId; // @synthesize platformId;
- (void).cxx_destruct;	// IMP=0x00000001007d1d08
- (void)dealloc;	// IMP=0x00000001007d1968
- (id)createWUPModel;	// IMP=0x00000001007d1734

@end

