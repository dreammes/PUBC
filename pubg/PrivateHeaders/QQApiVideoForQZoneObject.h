//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSDictionary, NSString;

@interface QQApiVideoForQZoneObject : QQApiObject
{
    NSString *_assetURL;	// 40 = 0x28
    NSDictionary *_extMap;	// 48 = 0x30
}

+ (id)objectWithAssetURL:(id)arg1 title:(id)arg2 extMap:(id)arg3;	// IMP=0x0000000100b31c34
@property(retain, nonatomic) NSDictionary *extMap; // @synthesize extMap=_extMap;
@property(retain, nonatomic) NSString *assetURL; // @synthesize assetURL=_assetURL;
- (void)dealloc;	// IMP=0x0000000100b31c8c
- (id)initWithAssetURL:(id)arg1 title:(id)arg2 extMap:(id)arg3;	// IMP=0x0000000100b31b98

@end

